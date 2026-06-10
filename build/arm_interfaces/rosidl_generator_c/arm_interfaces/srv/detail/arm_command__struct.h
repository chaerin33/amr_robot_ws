// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_interfaces:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__STRUCT_H_
#define ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
// Member 'location'
#include "rosidl_runtime_c/string.h"
// Member 'object_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ArmCommand in the package arm_interfaces.
typedef struct arm_interfaces__srv__ArmCommand_Request
{
  rosidl_runtime_c__String action;
  rosidl_runtime_c__int32__Sequence object_ids;
  rosidl_runtime_c__String location;
} arm_interfaces__srv__ArmCommand_Request;

// Struct for a sequence of arm_interfaces__srv__ArmCommand_Request.
typedef struct arm_interfaces__srv__ArmCommand_Request__Sequence
{
  arm_interfaces__srv__ArmCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__srv__ArmCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'slots'
// Member 'object_ids'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ArmCommand in the package arm_interfaces.
typedef struct arm_interfaces__srv__ArmCommand_Response
{
  bool success;
  rosidl_runtime_c__int32__Sequence slots;
  rosidl_runtime_c__int32__Sequence object_ids;
  rosidl_runtime_c__String message;
} arm_interfaces__srv__ArmCommand_Response;

// Struct for a sequence of arm_interfaces__srv__ArmCommand_Response.
typedef struct arm_interfaces__srv__ArmCommand_Response__Sequence
{
  arm_interfaces__srv__ArmCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__srv__ArmCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__STRUCT_H_
