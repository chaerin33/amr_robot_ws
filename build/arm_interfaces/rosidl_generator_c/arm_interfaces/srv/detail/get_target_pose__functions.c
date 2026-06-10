// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arm_interfaces:srv/GetTargetPose.idl
// generated code does not contain a copyright notice
#include "arm_interfaces/srv/detail/get_target_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_color`
// Member `target_size`
#include "rosidl_runtime_c/string_functions.h"

bool
arm_interfaces__srv__GetTargetPose_Request__init(arm_interfaces__srv__GetTargetPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_color
  if (!rosidl_runtime_c__String__init(&msg->target_color)) {
    arm_interfaces__srv__GetTargetPose_Request__fini(msg);
    return false;
  }
  // target_size
  if (!rosidl_runtime_c__String__init(&msg->target_size)) {
    arm_interfaces__srv__GetTargetPose_Request__fini(msg);
    return false;
  }
  return true;
}

void
arm_interfaces__srv__GetTargetPose_Request__fini(arm_interfaces__srv__GetTargetPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_color
  rosidl_runtime_c__String__fini(&msg->target_color);
  // target_size
  rosidl_runtime_c__String__fini(&msg->target_size);
}

bool
arm_interfaces__srv__GetTargetPose_Request__are_equal(const arm_interfaces__srv__GetTargetPose_Request * lhs, const arm_interfaces__srv__GetTargetPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_color), &(rhs->target_color)))
  {
    return false;
  }
  // target_size
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_size), &(rhs->target_size)))
  {
    return false;
  }
  return true;
}

bool
arm_interfaces__srv__GetTargetPose_Request__copy(
  const arm_interfaces__srv__GetTargetPose_Request * input,
  arm_interfaces__srv__GetTargetPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_color
  if (!rosidl_runtime_c__String__copy(
      &(input->target_color), &(output->target_color)))
  {
    return false;
  }
  // target_size
  if (!rosidl_runtime_c__String__copy(
      &(input->target_size), &(output->target_size)))
  {
    return false;
  }
  return true;
}

arm_interfaces__srv__GetTargetPose_Request *
arm_interfaces__srv__GetTargetPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__GetTargetPose_Request * msg = (arm_interfaces__srv__GetTargetPose_Request *)allocator.allocate(sizeof(arm_interfaces__srv__GetTargetPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_interfaces__srv__GetTargetPose_Request));
  bool success = arm_interfaces__srv__GetTargetPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_interfaces__srv__GetTargetPose_Request__destroy(arm_interfaces__srv__GetTargetPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_interfaces__srv__GetTargetPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_interfaces__srv__GetTargetPose_Request__Sequence__init(arm_interfaces__srv__GetTargetPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__GetTargetPose_Request * data = NULL;

  if (size) {
    data = (arm_interfaces__srv__GetTargetPose_Request *)allocator.zero_allocate(size, sizeof(arm_interfaces__srv__GetTargetPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_interfaces__srv__GetTargetPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_interfaces__srv__GetTargetPose_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arm_interfaces__srv__GetTargetPose_Request__Sequence__fini(arm_interfaces__srv__GetTargetPose_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arm_interfaces__srv__GetTargetPose_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arm_interfaces__srv__GetTargetPose_Request__Sequence *
arm_interfaces__srv__GetTargetPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__GetTargetPose_Request__Sequence * array = (arm_interfaces__srv__GetTargetPose_Request__Sequence *)allocator.allocate(sizeof(arm_interfaces__srv__GetTargetPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_interfaces__srv__GetTargetPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_interfaces__srv__GetTargetPose_Request__Sequence__destroy(arm_interfaces__srv__GetTargetPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_interfaces__srv__GetTargetPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_interfaces__srv__GetTargetPose_Request__Sequence__are_equal(const arm_interfaces__srv__GetTargetPose_Request__Sequence * lhs, const arm_interfaces__srv__GetTargetPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_interfaces__srv__GetTargetPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_interfaces__srv__GetTargetPose_Request__Sequence__copy(
  const arm_interfaces__srv__GetTargetPose_Request__Sequence * input,
  arm_interfaces__srv__GetTargetPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arm_interfaces__srv__GetTargetPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_interfaces__srv__GetTargetPose_Request * data =
      (arm_interfaces__srv__GetTargetPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_interfaces__srv__GetTargetPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_interfaces__srv__GetTargetPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_interfaces__srv__GetTargetPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `class_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
arm_interfaces__srv__GetTargetPose_Response__init(arm_interfaces__srv__GetTargetPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // x
  // y
  // z
  // yaw
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    arm_interfaces__srv__GetTargetPose_Response__fini(msg);
    return false;
  }
  return true;
}

void
arm_interfaces__srv__GetTargetPose_Response__fini(arm_interfaces__srv__GetTargetPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // x
  // y
  // z
  // yaw
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
}

bool
arm_interfaces__srv__GetTargetPose_Response__are_equal(const arm_interfaces__srv__GetTargetPose_Response * lhs, const arm_interfaces__srv__GetTargetPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  return true;
}

bool
arm_interfaces__srv__GetTargetPose_Response__copy(
  const arm_interfaces__srv__GetTargetPose_Response * input,
  arm_interfaces__srv__GetTargetPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  return true;
}

arm_interfaces__srv__GetTargetPose_Response *
arm_interfaces__srv__GetTargetPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__GetTargetPose_Response * msg = (arm_interfaces__srv__GetTargetPose_Response *)allocator.allocate(sizeof(arm_interfaces__srv__GetTargetPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_interfaces__srv__GetTargetPose_Response));
  bool success = arm_interfaces__srv__GetTargetPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_interfaces__srv__GetTargetPose_Response__destroy(arm_interfaces__srv__GetTargetPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_interfaces__srv__GetTargetPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_interfaces__srv__GetTargetPose_Response__Sequence__init(arm_interfaces__srv__GetTargetPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__GetTargetPose_Response * data = NULL;

  if (size) {
    data = (arm_interfaces__srv__GetTargetPose_Response *)allocator.zero_allocate(size, sizeof(arm_interfaces__srv__GetTargetPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_interfaces__srv__GetTargetPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_interfaces__srv__GetTargetPose_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arm_interfaces__srv__GetTargetPose_Response__Sequence__fini(arm_interfaces__srv__GetTargetPose_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arm_interfaces__srv__GetTargetPose_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arm_interfaces__srv__GetTargetPose_Response__Sequence *
arm_interfaces__srv__GetTargetPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__GetTargetPose_Response__Sequence * array = (arm_interfaces__srv__GetTargetPose_Response__Sequence *)allocator.allocate(sizeof(arm_interfaces__srv__GetTargetPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_interfaces__srv__GetTargetPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_interfaces__srv__GetTargetPose_Response__Sequence__destroy(arm_interfaces__srv__GetTargetPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_interfaces__srv__GetTargetPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_interfaces__srv__GetTargetPose_Response__Sequence__are_equal(const arm_interfaces__srv__GetTargetPose_Response__Sequence * lhs, const arm_interfaces__srv__GetTargetPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_interfaces__srv__GetTargetPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_interfaces__srv__GetTargetPose_Response__Sequence__copy(
  const arm_interfaces__srv__GetTargetPose_Response__Sequence * input,
  arm_interfaces__srv__GetTargetPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arm_interfaces__srv__GetTargetPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_interfaces__srv__GetTargetPose_Response * data =
      (arm_interfaces__srv__GetTargetPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_interfaces__srv__GetTargetPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_interfaces__srv__GetTargetPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_interfaces__srv__GetTargetPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
