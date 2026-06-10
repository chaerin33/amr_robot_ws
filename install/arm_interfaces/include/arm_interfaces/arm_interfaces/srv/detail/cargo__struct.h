// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_interfaces:srv/Cargo.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__CARGO__STRUCT_H_
#define ARM_INTERFACES__SRV__DETAIL__CARGO__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Cargo in the package arm_interfaces.
typedef struct arm_interfaces__srv__Cargo_Request
{
  rosidl_runtime_c__String action;
  int32_t object_id;
  int32_t slot;
} arm_interfaces__srv__Cargo_Request;

// Struct for a sequence of arm_interfaces__srv__Cargo_Request.
typedef struct arm_interfaces__srv__Cargo_Request__Sequence
{
  arm_interfaces__srv__Cargo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__srv__Cargo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Cargo in the package arm_interfaces.
typedef struct arm_interfaces__srv__Cargo_Response
{
  bool success;
  int32_t slot;
  rosidl_runtime_c__String message;
} arm_interfaces__srv__Cargo_Response;

// Struct for a sequence of arm_interfaces__srv__Cargo_Response.
typedef struct arm_interfaces__srv__Cargo_Response__Sequence
{
  arm_interfaces__srv__Cargo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__srv__Cargo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_INTERFACES__SRV__DETAIL__CARGO__STRUCT_H_
