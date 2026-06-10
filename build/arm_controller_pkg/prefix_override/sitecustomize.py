import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/scr/robocup/amr_robot_ws/install/arm_controller_pkg'
