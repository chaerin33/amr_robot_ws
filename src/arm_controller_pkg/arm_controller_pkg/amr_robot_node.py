"""
amr_robot_node.py
AMR 위에 탑재된 로봇팔 제어 노드.
LOAD / UNLOAD 두 동작을 하나의 노드에서 처리한다.

서비스: /amr_robot_command  (arm_interfaces/srv/ArmCommand)
  Request:
    string  action      # "LOAD" / "UNLOAD"
    int32[] object_ids
    string  location    # 미사용 (호환성 유지)
  Response:
    bool    success
    int32[] slots
    int32[] object_ids
    string  message
"""

import threading

import numpy as np
import rbpodo as rb
import rclpy
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from std_srvs.srv import Trigger

from arm_interfaces.srv import ArmCommand, Cargo, GetTargetPose


# ── 로봇 설정 ──────────────────────────────────────────────
ROBOT_IP = '10.0.2.8'

HOME_JOINT_DEG = np.array([-90.0, 0.0, 90.0, 0.0, 90.0, 0.0])

J_VEL, J_ACC = 255, 255
L_VEL, L_ACC = 500, 800

# ── 카메라 오프셋 / Z 파라미터 (LOAD 전용) ──────────────────
CAM_X_OFF = -51.0
CAM_Y_OFF  =  32.0
Z_OFFSET   = -85.0
Z_MARGIN   =  20.0

# ── 슬롯 Z 이동량 ───────────────────────────────────────────
Z_DOWN_MM =  30.0
Z_UP_MM   = -30.0

# ── 슬롯별 웨이포인트 ────────────────────────────────────────
# 첫 번째 포인트는 HOME_JOINT_DEG와 동일하게 유지.
# 이동 시 첫 포인트는 스킵, 복귀 시 마지막 포인트(현재 위치)도 스킵.
SLOT_WAYPOINTS = {
    1: [
        np.array([-90.0,   0.0,  90.0,  0.0,  90.0,   0.0]),
        np.array([-90.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-35.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([ 53.60, 23.71,  15.87, 3.85, 130.79,  0.0]),
        np.array([ 67.77,  1.24,  49.43, 4.35, 119.99, -19.94]),
    ],
    2: [
        np.array([-90.0,   0.0,  90.0,  0.0,  90.0,  0.0]),
        np.array([-90.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-145.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-220.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-250.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-265.26, 18.68,  28.51, -2.23, 125.87, 3.60]),
    ],
    3: [
        np.array([-90.0,   0.0,  90.0,  0.0,  90.0,  0.0]),
        np.array([-90.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-145.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-220.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-250.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-253.19, 22.98,  22.45, -4.08, 128.11, 14.39]),
    ],
    4: [
        np.array([-90.0,   0.0,  90.0,  0.0,  90.0,  0.0]),
        np.array([-90.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-145.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-220.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-250.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-246.43, 19.80,  27.31,  1.84, 120.90, 24.45]),
    ],
    5: [
        np.array([-90.0,   0.0,  90.0,  0.0,  90.0,  0.0]),
        np.array([-90.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-145.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-220.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-243.08,  9.11,  40.45, 0.0, 130.43, 26.93]),
    ],
    6: [
        np.array([-90.0,   0.0,  90.0,  0.0,  90.0,  0.0]),
        np.array([-90.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-145.0, -20.81, 107.71, 0.0,  93.11,  0.0]),
        np.array([-220.0, -11.96,  57.40, 0.0, 100.40,  0.0]),
        np.array([-260.92,  2.93,  47.34, 0.0, 129.73,  9.09]),
    ],
}

# ── UNLOAD 배달 위치 웨이포인트 ──────────────────────────────
DELIVERY_WAYPOINTS = {
    0: [np.array([-106.29, 35.41,  98.92, 0.0,  45.67, -16.28])],
    1: [np.array([ -91.40, 32.81, 103.23, 0.0,  43.95,  -1.39])],
    2: [np.array([ -75.10, 34.50, 100.44, 0.0,  45.06,  14.91])],
    3: [np.array([ -78.43, 52.72,  68.95, 0.0,  58.33,  11.58])],
    4: [np.array([ -90.71, 51.06,  71.88, 0.0,  57.06,  -0.70])],
    5: [np.array([-103.28, 53.86,  66.91, 0.0,  59.23, -13.27])],
}

# ── 재료 이름 (LOAD 비전 탐지용) ────────────────────────────
MATERIAL_NAMES = {
    1: '2x2_red',
    2: '2x2_green',
    3: '2x2_blue',
    4: '2x2_yellow',
    5: '4x2_red',
    6: '4x2_green',
    7: '4x2_blue',
    8: '4x2_yellow',
}


class AmrRobotNode(Node):

    def __init__(self):
        super().__init__('amr_robot_node')
        self.cbg = ReentrantCallbackGroup()

        # ── 로봇 연결 ──────────────────────────────────────
        self.robot = None
        self.rc = None
        self.robot_ready = False
        try:
            self.robot = rb.Cobot(ROBOT_IP)
            self.rc = rb.ResponseCollector()
            self.robot.set_operation_mode(self.rc, rb.OperationMode.Real)
            self.robot.set_speed_bar(self.rc, 1.0)
            self.robot_ready = True
            self.get_logger().info('[AMR_ROBOT] robot connected')
        except Exception as e:
            self.robot = None
            self.rc = None
            self.robot_ready = False
            self.get_logger().error(f'[AMR_ROBOT] robot connection error: {e}')

        # ── 클라이언트 ─────────────────────────────────────
        self.vision_client = self.create_client(
            GetTargetPose, '/get_target_pose', callback_group=self.cbg)
        self.gripper_open_client = self.create_client(
            Trigger, '/gripper/open', callback_group=self.cbg)
        self.gripper_grip_client = self.create_client(
            Trigger, '/gripper/grip', callback_group=self.cbg)
        self.cargo_client = self.create_client(
            Cargo, '/cargo', callback_group=self.cbg)

        # ── 서비스 서버 ────────────────────────────────────
        self.srv = self.create_service(
            ArmCommand, '/amr_robot_command',
            self.arm_command_cb, callback_group=self.cbg)

        self._busy_lock = threading.Lock()
        self._busy = False

        self.get_logger().info('[AMR_ROBOT] amr_robot_node started')

    # ──────────────────────────────────────────────────────
    # 상태 확인
    # ──────────────────────────────────────────────────────

    def is_robot_ready(self):
        if not self.robot_ready or self.robot is None or self.rc is None:
            self.get_logger().error('[AMR_ROBOT] robot is not connected')
            return False
        return True

    # ──────────────────────────────────────────────────────
    # 서비스 호출 헬퍼
    # ──────────────────────────────────────────────────────

    def call_service(self, client, request, timeout=10.0):
        """ReentrantCallbackGroup + MultiThreadedExecutor 환경에서
        콜백 내부에서 서비스를 호출하는 헬퍼."""
        try:
            if not client.wait_for_service(timeout_sec=1.0):
                self.get_logger().error(
                    f'[AMR_ROBOT] service unavailable: {client.srv_name}')
                return None
            future = client.call_async(request)
            done_event = threading.Event()
            future.add_done_callback(lambda _: done_event.set())
            if not done_event.wait(timeout=timeout):
                self.get_logger().error(
                    f'[AMR_ROBOT] service timeout: {client.srv_name}')
                return None
            return future.result()
        except Exception as e:
            self.get_logger().error(
                f'[AMR_ROBOT] service call failed ({client.srv_name}): {e}')
            return None

    def call_vision(self, target_color, retries=3):
        import time
        for i in range(retries):
            req = GetTargetPose.Request()
            req.target_color = target_color
            req.target_size = ''
            res = self.call_service(self.vision_client, req)
            if res and res.success:
                return res
            self.get_logger().warn(f'[AMR_ROBOT] vision retry {i + 1}/{retries}')
            time.sleep(0.5)
        return None

    def call_gripper(self, grip: bool):
        client = self.gripper_grip_client if grip else self.gripper_open_client
        req = Trigger.Request()
        res = self.call_service(client, req, timeout=6.0)
        action_name = 'grip' if grip else 'open'
        if res and res.success:
            self.get_logger().info(f'[GRIPPER] {action_name}')
            return True
        self.get_logger().error(f'[GRIPPER] {action_name} failed')
        return False

    def call_cargo(self, action, slot=0, object_id=0):
        req = Cargo.Request()
        req.action = action
        req.slot = slot
        req.object_id = object_id
        return self.call_service(self.cargo_client, req)

    # ──────────────────────────────────────────────────────
    # 로봇 이동 헬퍼
    # ──────────────────────────────────────────────────────

    def wait_move(self, timeout=10.0, label='move'):
        if not self.is_robot_ready():
            return False
        try:
            result = self.robot.wait_for_move_finished(self.rc, timeout=timeout)
            if result is False:
                self.get_logger().error(f'[AMR_ROBOT] {label} wait returned False')
                return False
            return True
        except Exception as e:
            self.get_logger().error(f'[AMR_ROBOT] {label} wait failed: {e}')
            return False

    def move_j_checked(self, joints_deg, label='move_j', timeout=10.0):
        if not self.is_robot_ready():
            return False
        try:
            self.robot.move_j(self.rc, joints_deg, J_VEL, J_ACC)
        except Exception as e:
            self.get_logger().error(f'[AMR_ROBOT] {label} command failed: {e}')
            return False
        return self.wait_move(timeout=timeout, label=label)

    def move_l_rel_checked(self, delta, label='move_l_rel', timeout=10.0):
        if not self.is_robot_ready():
            return False
        try:
            self.robot.move_l_rel(
                self.rc, np.array(delta, dtype=float),
                L_VEL, L_ACC, rb.ReferenceFrame.Tool)
        except Exception as e:
            self.get_logger().error(f'[AMR_ROBOT] {label} command failed: {e}')
            return False
        return self.wait_move(timeout=timeout, label=label)

    def go_home(self):
        return self.move_j_checked(HOME_JOINT_DEG, label='go_home')

    def move_to_slot(self, slot):
        waypoints = SLOT_WAYPOINTS.get(slot)
        if waypoints is None:
            self.get_logger().error(f'[AMR_ROBOT] no waypoints for slot={slot}')
            return False
        # 첫 번째 포인트(HOME)는 스킵
        for idx, wp in enumerate(waypoints[1:], start=2):
            if not self.move_j_checked(wp, label=f'move_to_slot({slot}) wp{idx}'):
                return False
        self.get_logger().info(f'[AMR_ROBOT] slot={slot} reached')
        return True

    def return_from_slot(self, slot):
        waypoints = SLOT_WAYPOINTS.get(slot)
        if waypoints is None:
            self.get_logger().error(f'[AMR_ROBOT] no waypoints for slot={slot}')
            return False
        # 현재 위치(마지막 포인트)는 스킵 후 역순 이동
        for idx, wp in enumerate(list(reversed(waypoints))[1:], start=2):
            if not self.move_j_checked(wp, label=f'return_from_slot({slot}) wp{idx}'):
                return False
        self.get_logger().info(f'[AMR_ROBOT] returned from slot={slot}')
        return True

    def move_to_delivery(self, delivery_idx):
        waypoints = DELIVERY_WAYPOINTS.get(delivery_idx)
        if waypoints is None:
            self.get_logger().error(
                f'[AMR_ROBOT] no delivery waypoints for idx={delivery_idx}')
            return False
        for idx, wp in enumerate(waypoints, start=1):
            if not self.move_j_checked(
                    wp, label=f'move_to_delivery({delivery_idx}) wp{idx}'):
                return False
        self.get_logger().info(f'[AMR_ROBOT] delivery position {delivery_idx} reached')
        return True

    def return_from_delivery(self, delivery_idx):
        waypoints = DELIVERY_WAYPOINTS.get(delivery_idx)
        if waypoints is None:
            self.get_logger().error(
                f'[AMR_ROBOT] no delivery waypoints for idx={delivery_idx}')
            return False
        # 웨이포인트가 1개면 그대로, 여러 개면 현재 위치 스킵
        return_wps = (list(reversed(waypoints))[1:]
                      if len(waypoints) > 1 else list(reversed(waypoints)))
        for idx, wp in enumerate(return_wps, start=1):
            if not self.move_j_checked(
                    wp, label=f'return_from_delivery({delivery_idx}) wp{idx}'):
                return False
        self.get_logger().info(
            f'[AMR_ROBOT] returned from delivery position {delivery_idx}')
        return True

    # ──────────────────────────────────────────────────────
    # 서비스 콜백 — 진입점
    # ──────────────────────────────────────────────────────

    def arm_command_cb(self, request, response):
        response.slots = []
        response.object_ids = []

        action = request.action.upper()
        if action not in ('LOAD', 'UNLOAD'):
            response.success = False
            response.message = f'unknown action: {request.action}'
            return response

        if not self.is_robot_ready():
            response.success = False
            response.message = 'robot not connected'
            return response

        with self._busy_lock:
            if self._busy:
                response.success = False
                response.message = 'busy'
                return response
            self._busy = True

        try:
            if action == 'LOAD':
                results = self._load_multi(list(request.object_ids))
            else:
                results = self._unload_multi(list(request.object_ids))

            success_all = bool(results) and all(r['success'] for r in results)
            response.success = success_all
            response.slots = [r['slot'] for r in results]
            response.object_ids = [r['object_id'] for r in results]
            response.message = ', '.join(r['message'] for r in results)

        except Exception as e:
            self.get_logger().error(f'[AMR_ROBOT] exception: {e}')
            response.success = False
            response.message = str(e)
        finally:
            with self._busy_lock:
                self._busy = False

        return response

    # ──────────────────────────────────────────────────────
    # LOAD 시퀀스
    # ──────────────────────────────────────────────────────

    def _load_multi(self, object_ids):
        results = []
        for object_id in object_ids:
            result = self._load_one(object_id)
            results.append(result)
            if not result['success']:
                self.get_logger().error(
                    f'[LOAD] failed at object_id={object_id}, stopping')
                break
        return results

    def _load_one(self, object_id):
        import time

        def fail(msg):
            return {'success': False, 'slot': -1, 'object_id': object_id, 'message': msg}

        if not self.is_robot_ready():
            return fail('robot not connected')

        target_color = MATERIAL_NAMES.get(object_id)
        if not target_color:
            return fail(f'unknown object_id={object_id}')

        self.get_logger().info(f'[LOAD START] object_id={object_id}, target={target_color}')

        # 1. 빈 슬롯 확인
        res = self.call_cargo('FIND_EMPTY', object_id=object_id)
        if not res or not res.success:
            return fail('no empty slot')
        slot = res.slot
        self.get_logger().info(f'[CARGO] empty slot: {slot}')

        # 2. 초기화
        if not self.call_gripper(False):
            return fail('initial gripper open failed')
        if not self.go_home():
            return fail('go_home failed')

        # 3. YAW 보정
        p = self.call_vision(target_color)
        if not p:
            return fail('vision failed at YAW')
        if abs(p.yaw) >= 0.01:
            target_j = HOME_JOINT_DEG.copy()
            target_j[5] += p.yaw
            if not self.move_j_checked(target_j, label='yaw correction'):
                return fail('yaw correction failed')
            time.sleep(0.5)

        # 4. XY 보정
        p = self.call_vision(target_color)
        if not p:
            self.go_home()
            return fail('vision failed at XY')
        dx = -(p.x * 1000.0) + CAM_Y_OFF
        dy =  (p.y * 1000.0) + CAM_X_OFF
        if not self.move_l_rel_checked([dy, dx, 0.0, 0.0, 0.0, 0.0], label='xy correction'):
            self.go_home()
            return fail('xy correction failed')
        time.sleep(0.5)

        # 5. Z 하강
        p = self.call_vision(target_color)
        if not p:
            self.go_home()
            return fail('vision failed at Z')
        z_move = (p.z * 1000.0) + Z_OFFSET
        if not self.move_l_rel_checked(
                [0.0, 0.0, z_move - Z_MARGIN, 0.0, 0.0, 0.0], label='z approach'):
            self.go_home()
            return fail('z approach failed')
        if not self.move_l_rel_checked(
                [0.0, 0.0, Z_MARGIN, 0.0, 0.0, 0.0], label='z final approach'):
            self.go_home()
            return fail('z final approach failed')
        time.sleep(0.5)

        # 6. 그리퍼 grip
        if not self.call_gripper(True):
            self.move_l_rel_checked(
                [0.0, 0.0, -100.0, 0.0, 0.0, 0.0], label='retreat after grip failure')
            self.go_home()
            return fail('grip failed')

        # 7. Z 상승 후 홈
        if not self.move_l_rel_checked(
                [0.0, 0.0, -50.0, 0.0, 0.0, 0.0], label='lift after grip'):
            self.go_home()
            return fail('lift after grip failed')
        self.go_home()

        # 8. 슬롯으로 이동
        if not self.move_to_slot(slot):
            self.go_home()
            return fail('move to slot failed')

        # 9. Z 하강 → open → Z 상승
        if not self.move_l_rel_checked(
                [0.0, 0.0, Z_DOWN_MM, 0.0, 0.0, 0.0], label='place z down'):
            self.go_home()
            return fail('place z down failed')
        if not self.call_gripper(False):
            self.move_l_rel_checked(
                [0.0, 0.0, Z_UP_MM, 0.0, 0.0, 0.0], label='retreat after open failure')
            self.go_home()
            return fail('final gripper open failed')
        if not self.move_l_rel_checked(
                [0.0, 0.0, Z_UP_MM, 0.0, 0.0, 0.0], label='place z up'):
            self.go_home()
            return fail('place z up failed')

        # 10. 홈 복귀
        if not self.return_from_slot(slot):
            return fail('return from slot failed')

        # 11. 카고 기록
        res = self.call_cargo('SET', slot=slot, object_id=object_id)
        if not res or not res.success:
            return fail('loaded physically but cargo SET failed')

        self.get_logger().info(f'[LOAD DONE] object_id={object_id}, slot={slot}')
        return {'success': True, 'slot': slot, 'object_id': object_id, 'message': 'load success'}

    # ──────────────────────────────────────────────────────
    # UNLOAD 시퀀스
    # ──────────────────────────────────────────────────────

    def _unload_multi(self, object_ids):
        results = []
        for idx, object_id in enumerate(object_ids):
            result = self._unload_one(object_id, delivery_idx=idx)
            results.append(result)
            if not result['success']:
                self.get_logger().error(
                    f'[UNLOAD] failed at object_id={object_id}, stopping')
                break
        return results

    def _unload_one(self, object_id, delivery_idx):
        def fail(msg, slot=-1):
            return {'success': False, 'slot': slot, 'object_id': object_id, 'message': msg}

        if not self.is_robot_ready():
            return fail('robot not connected')

        self.get_logger().info(
            f'[UNLOAD START] object_id={object_id}, delivery_idx={delivery_idx}')

        # 1. 슬롯 확인
        res = self.call_cargo('FIND_OBJECT', object_id=object_id)
        if not res or not res.success:
            return fail(f'object not found: {object_id}')
        slot = res.slot
        self.get_logger().info(f'[CARGO] object found: slot={slot}')

        # 2. 초기화
        if not self.call_gripper(False):
            return fail('initial gripper open failed', slot)
        if not self.go_home():
            return fail('go_home failed', slot)

        # 3. 슬롯으로 이동
        if not self.move_to_slot(slot):
            self.go_home()
            return fail('move to slot failed', slot)

        # 4. Z 하강
        if not self.move_l_rel_checked(
                [0.0, 0.0, Z_DOWN_MM, 0.0, 0.0, 0.0], label='slot z down'):
            self.go_home()
            return fail('slot z down failed', slot)

        # 5. 그리퍼 grip
        if not self.call_gripper(True):
            self.move_l_rel_checked(
                [0.0, 0.0, -100.0, 0.0, 0.0, 0.0], label='retreat after grip failure')
            self.return_from_slot(slot)
            return fail('grip failed', slot)

        # 6. Z 상승
        if not self.move_l_rel_checked(
                [0.0, 0.0, Z_UP_MM, 0.0, 0.0, 0.0], label='slot z up'):
            return fail('slot z up failed', slot)

        # 7. 카고 해제 (물체를 이미 집었으므로 먼저 기록)
        res = self.call_cargo('CLEAR', slot=slot)
        if not res or not res.success:
            return fail('object picked physically but cargo CLEAR failed', slot)

        # 8. 홈 복귀
        if not self.return_from_slot(slot):
            return fail('cargo CLEAR done, but return from slot failed', slot)

        # 9. 배달 위치로 이동
        if not self.move_to_delivery(delivery_idx):
            self.go_home()
            return fail('move to delivery failed', slot)

        # 10. Z 하강 → open → Z 상승
        if not self.move_l_rel_checked(
                [0.0, 0.0, Z_DOWN_MM, 0.0, 0.0, 0.0], label='delivery z down'):
            self.go_home()
            return fail('delivery z down failed', slot)
        if not self.call_gripper(False):
            self.move_l_rel_checked(
                [0.0, 0.0, Z_UP_MM, 0.0, 0.0, 0.0], label='retreat after delivery open failure')
            self.go_home()
            return fail('final gripper open failed', slot)
        if not self.move_l_rel_checked(
                [0.0, 0.0, Z_UP_MM, 0.0, 0.0, 0.0], label='delivery z up'):
            self.go_home()
            return fail('delivery z up failed', slot)

        # 11. 홈 복귀
        if not self.return_from_delivery(delivery_idx):
            return fail('return from delivery failed', slot)

        self.get_logger().info(
            f'[UNLOAD DONE] object_id={object_id}, slot={slot}, delivery_idx={delivery_idx}')
        return {'success': True, 'slot': slot, 'object_id': object_id, 'message': 'unload success'}


def main(args=None):
    rclpy.init(args=args)
    node = AmrRobotNode()
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()
