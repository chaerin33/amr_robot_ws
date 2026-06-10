// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arm_interfaces:srv/Cargo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arm_interfaces/srv/detail/cargo__rosidl_typesupport_introspection_c.h"
#include "arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arm_interfaces/srv/detail/cargo__functions.h"
#include "arm_interfaces/srv/detail/cargo__struct.h"


// Include directives for member types
// Member `action`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arm_interfaces__srv__Cargo_Request__init(message_memory);
}

void arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_fini_function(void * message_memory)
{
  arm_interfaces__srv__Cargo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_member_array[3] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__Cargo_Request, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__Cargo_Request, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__Cargo_Request, slot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_members = {
  "arm_interfaces__srv",  // message namespace
  "Cargo_Request",  // message name
  3,  // number of fields
  sizeof(arm_interfaces__srv__Cargo_Request),
  arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_member_array,  // message members
  arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_type_support_handle = {
  0,
  &arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, Cargo_Request)() {
  if (!arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_type_support_handle.typesupport_identifier) {
    arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_interfaces__srv__Cargo_Request__rosidl_typesupport_introspection_c__Cargo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arm_interfaces/srv/detail/cargo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arm_interfaces/srv/detail/cargo__functions.h"
// already included above
// #include "arm_interfaces/srv/detail/cargo__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arm_interfaces__srv__Cargo_Response__init(message_memory);
}

void arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_fini_function(void * message_memory)
{
  arm_interfaces__srv__Cargo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__Cargo_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__Cargo_Response, slot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__srv__Cargo_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_members = {
  "arm_interfaces__srv",  // message namespace
  "Cargo_Response",  // message name
  3,  // number of fields
  sizeof(arm_interfaces__srv__Cargo_Response),
  arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_member_array,  // message members
  arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_type_support_handle = {
  0,
  &arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, Cargo_Response)() {
  if (!arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_type_support_handle.typesupport_identifier) {
    arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_interfaces__srv__Cargo_Response__rosidl_typesupport_introspection_c__Cargo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arm_interfaces/srv/detail/cargo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_service_members = {
  "arm_interfaces__srv",  // service namespace
  "Cargo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_Request_message_type_support_handle,
  NULL  // response message
  // arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_Response_message_type_support_handle
};

static rosidl_service_type_support_t arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_service_type_support_handle = {
  0,
  &arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, Cargo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, Cargo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, Cargo)() {
  if (!arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_service_type_support_handle.typesupport_identifier) {
    arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, Cargo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, srv, Cargo_Response)()->data;
  }

  return &arm_interfaces__srv__detail__cargo__rosidl_typesupport_introspection_c__Cargo_service_type_support_handle;
}
