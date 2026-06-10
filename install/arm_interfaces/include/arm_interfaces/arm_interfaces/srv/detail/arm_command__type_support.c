// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arm_interfaces:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arm_interfaces/srv/detail/arm_command__rosidl_typesupport_introspection_c.h"
#include "arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arm_interfaces/srv/detail/arm_command__functions.h"
#include "arm_interfaces/srv/detail/arm_command__struct.h"


// Include directives for member types
// Member `action`
// Member `location`
#include "rosidl_runtime_c/string_functions.h"
// Member `object_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arm_interfaces__srv__ArmCommand_Request__init(message_memory);
}

void arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_fini_function(void * message_memory)
{
  arm_interfaces__srv__ArmCommand_Request__fini(message_memory);
}

size_t arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__size_function__ArmCommand_Request__object_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Request__object_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__get_function__ArmCommand_Request__object_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__fetch_function__ArmCommand_Request__object_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Request__object_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__assign_function__ArmCommand_Request__object_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__get_function__ArmCommand_Request__object_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__resize_function__ArmCommand_Request__object_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_member_array[3] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__ArmCommand_Request, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__ArmCommand_Request, object_ids),  // bytes offset in struct
    NULL,  // default value
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__size_function__ArmCommand_Request__object_ids,  // size() function pointer
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Request__object_ids,  // get_const(index) function pointer
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__get_function__ArmCommand_Request__object_ids,  // get(index) function pointer
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__fetch_function__ArmCommand_Request__object_ids,  // fetch(index, &value) function pointer
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__assign_function__ArmCommand_Request__object_ids,  // assign(index, value) function pointer
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__resize_function__ArmCommand_Request__object_ids  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__ArmCommand_Request, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_members = {
  "arm_interfaces__srv",  // message namespace
  "ArmCommand_Request",  // message name
  3,  // number of fields
  sizeof(arm_interfaces__srv__ArmCommand_Request),
  arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_member_array,  // message members
  arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_type_support_handle = {
  0,
  &arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, ArmCommand_Request)() {
  if (!arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_type_support_handle.typesupport_identifier) {
    arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_interfaces__srv__ArmCommand_Request__rosidl_typesupport_introspection_c__ArmCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arm_interfaces/srv/detail/arm_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arm_interfaces/srv/detail/arm_command__functions.h"
// already included above
// #include "arm_interfaces/srv/detail/arm_command__struct.h"


// Include directives for member types
// Member `slots`
// Member `object_ids`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arm_interfaces__srv__ArmCommand_Response__init(message_memory);
}

void arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_fini_function(void * message_memory)
{
  arm_interfaces__srv__ArmCommand_Response__fini(message_memory);
}

size_t arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__size_function__ArmCommand_Response__slots(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Response__slots(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_function__ArmCommand_Response__slots(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__fetch_function__ArmCommand_Response__slots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Response__slots(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__assign_function__ArmCommand_Response__slots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_function__ArmCommand_Response__slots(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__resize_function__ArmCommand_Response__slots(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__size_function__ArmCommand_Response__object_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Response__object_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_function__ArmCommand_Response__object_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__fetch_function__ArmCommand_Response__object_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Response__object_ids(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__assign_function__ArmCommand_Response__object_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_function__ArmCommand_Response__object_ids(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__resize_function__ArmCommand_Response__object_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__ArmCommand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__ArmCommand_Response, slots),  // bytes offset in struct
    NULL,  // default value
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__size_function__ArmCommand_Response__slots,  // size() function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Response__slots,  // get_const(index) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_function__ArmCommand_Response__slots,  // get(index) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__fetch_function__ArmCommand_Response__slots,  // fetch(index, &value) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__assign_function__ArmCommand_Response__slots,  // assign(index, value) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__resize_function__ArmCommand_Response__slots  // resize(index) function pointer
  },
  {
    "object_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__ArmCommand_Response, object_ids),  // bytes offset in struct
    NULL,  // default value
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__size_function__ArmCommand_Response__object_ids,  // size() function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_const_function__ArmCommand_Response__object_ids,  // get_const(index) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__get_function__ArmCommand_Response__object_ids,  // get(index) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__fetch_function__ArmCommand_Response__object_ids,  // fetch(index, &value) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__assign_function__ArmCommand_Response__object_ids,  // assign(index, value) function pointer
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__resize_function__ArmCommand_Response__object_ids  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__ArmCommand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_members = {
  "arm_interfaces__srv",  // message namespace
  "ArmCommand_Response",  // message name
  4,  // number of fields
  sizeof(arm_interfaces__srv__ArmCommand_Response),
  arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_member_array,  // message members
  arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_type_support_handle = {
  0,
  &arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, ArmCommand_Response)() {
  if (!arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_type_support_handle.typesupport_identifier) {
    arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_interfaces__srv__ArmCommand_Response__rosidl_typesupport_introspection_c__ArmCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arm_interfaces/srv/detail/arm_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_service_members = {
  "arm_interfaces__srv",  // service namespace
  "ArmCommand",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_Request_message_type_support_handle,
  NULL  // response message
  // arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_Response_message_type_support_handle
};

static rosidl_service_type_support_t arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_service_type_support_handle = {
  0,
  &arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, ArmCommand_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, ArmCommand_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, ArmCommand)() {
  if (!arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_service_type_support_handle.typesupport_identifier) {
    arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, ArmCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, ArmCommand_Response)()->data;
  }

  return &arm_interfaces__srv__detail__arm_command__rosidl_typesupport_introspection_c__ArmCommand_service_type_support_handle;
}
