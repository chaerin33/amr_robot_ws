// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_interfaces:srv/GetTargetPose.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__STRUCT_H_
#define ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_color'
// Member 'target_size'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTargetPose in the package arm_interfaces.
typedef struct arm_interfaces__srv__GetTargetPose_Request
{
  rosidl_runtime_c__String target_color;
  rosidl_runtime_c__String target_size;
} arm_interfaces__srv__GetTargetPose_Request;

// Struct for a sequence of arm_interfaces__srv__GetTargetPose_Request.
typedef struct arm_interfaces__srv__GetTargetPose_Request__Sequence
{
  arm_interfaces__srv__GetTargetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__srv__GetTargetPose_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTargetPose in the package arm_interfaces.
typedef struct arm_interfaces__srv__GetTargetPose_Response
{
  bool success;
  double x;
  double y;
  double z;
  double yaw;
  rosidl_runtime_c__String class_name;
} arm_interfaces__srv__GetTargetPose_Response;

// Struct for a sequence of arm_interfaces__srv__GetTargetPose_Response.
typedef struct arm_interfaces__srv__GetTargetPose_Response__Sequence
{
  arm_interfaces__srv__GetTargetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__srv__GetTargetPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__STRUCT_H_
