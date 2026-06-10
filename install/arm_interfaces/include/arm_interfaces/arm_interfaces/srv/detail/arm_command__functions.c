// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arm_interfaces:srv/ArmCommand.idl
// generated code does not contain a copyright notice
#include "arm_interfaces/srv/detail/arm_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `action`
// Member `location`
#include "rosidl_runtime_c/string_functions.h"
// Member `object_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
arm_interfaces__srv__ArmCommand_Request__init(arm_interfaces__srv__ArmCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__init(&msg->action)) {
    arm_interfaces__srv__ArmCommand_Request__fini(msg);
    return false;
  }
  // object_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->object_ids, 0)) {
    arm_interfaces__srv__ArmCommand_Request__fini(msg);
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    arm_interfaces__srv__ArmCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
arm_interfaces__srv__ArmCommand_Request__fini(arm_interfaces__srv__ArmCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__fini(&msg->action);
  // object_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->object_ids);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
}

bool
arm_interfaces__srv__ArmCommand_Request__are_equal(const arm_interfaces__srv__ArmCommand_Request * lhs, const arm_interfaces__srv__ArmCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // object_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->object_ids), &(rhs->object_ids)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
arm_interfaces__srv__ArmCommand_Request__copy(
  const arm_interfaces__srv__ArmCommand_Request * input,
  arm_interfaces__srv__ArmCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // object_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->object_ids), &(output->object_ids)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

arm_interfaces__srv__ArmCommand_Request *
arm_interfaces__srv__ArmCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__ArmCommand_Request * msg = (arm_interfaces__srv__ArmCommand_Request *)allocator.allocate(sizeof(arm_interfaces__srv__ArmCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_interfaces__srv__ArmCommand_Request));
  bool success = arm_interfaces__srv__ArmCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_interfaces__srv__ArmCommand_Request__destroy(arm_interfaces__srv__ArmCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_interfaces__srv__ArmCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_interfaces__srv__ArmCommand_Request__Sequence__init(arm_interfaces__srv__ArmCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__ArmCommand_Request * data = NULL;

  if (size) {
    data = (arm_interfaces__srv__ArmCommand_Request *)allocator.zero_allocate(size, sizeof(arm_interfaces__srv__ArmCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_interfaces__srv__ArmCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_interfaces__srv__ArmCommand_Request__fini(&data[i - 1]);
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
arm_interfaces__srv__ArmCommand_Request__Sequence__fini(arm_interfaces__srv__ArmCommand_Request__Sequence * array)
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
      arm_interfaces__srv__ArmCommand_Request__fini(&array->data[i]);
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

arm_interfaces__srv__ArmCommand_Request__Sequence *
arm_interfaces__srv__ArmCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__ArmCommand_Request__Sequence * array = (arm_interfaces__srv__ArmCommand_Request__Sequence *)allocator.allocate(sizeof(arm_interfaces__srv__ArmCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_interfaces__srv__ArmCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_interfaces__srv__ArmCommand_Request__Sequence__destroy(arm_interfaces__srv__ArmCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_interfaces__srv__ArmCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_interfaces__srv__ArmCommand_Request__Sequence__are_equal(const arm_interfaces__srv__ArmCommand_Request__Sequence * lhs, const arm_interfaces__srv__ArmCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_interfaces__srv__ArmCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_interfaces__srv__ArmCommand_Request__Sequence__copy(
  const arm_interfaces__srv__ArmCommand_Request__Sequence * input,
  arm_interfaces__srv__ArmCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arm_interfaces__srv__ArmCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_interfaces__srv__ArmCommand_Request * data =
      (arm_interfaces__srv__ArmCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_interfaces__srv__ArmCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_interfaces__srv__ArmCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_interfaces__srv__ArmCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `slots`
// Member `object_ids`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
arm_interfaces__srv__ArmCommand_Response__init(arm_interfaces__srv__ArmCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // slots
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->slots, 0)) {
    arm_interfaces__srv__ArmCommand_Response__fini(msg);
    return false;
  }
  // object_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->object_ids, 0)) {
    arm_interfaces__srv__ArmCommand_Response__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    arm_interfaces__srv__ArmCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
arm_interfaces__srv__ArmCommand_Response__fini(arm_interfaces__srv__ArmCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // slots
  rosidl_runtime_c__int32__Sequence__fini(&msg->slots);
  // object_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->object_ids);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
arm_interfaces__srv__ArmCommand_Response__are_equal(const arm_interfaces__srv__ArmCommand_Response * lhs, const arm_interfaces__srv__ArmCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // slots
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->slots), &(rhs->slots)))
  {
    return false;
  }
  // object_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->object_ids), &(rhs->object_ids)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
arm_interfaces__srv__ArmCommand_Response__copy(
  const arm_interfaces__srv__ArmCommand_Response * input,
  arm_interfaces__srv__ArmCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // slots
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->slots), &(output->slots)))
  {
    return false;
  }
  // object_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->object_ids), &(output->object_ids)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

arm_interfaces__srv__ArmCommand_Response *
arm_interfaces__srv__ArmCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__ArmCommand_Response * msg = (arm_interfaces__srv__ArmCommand_Response *)allocator.allocate(sizeof(arm_interfaces__srv__ArmCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_interfaces__srv__ArmCommand_Response));
  bool success = arm_interfaces__srv__ArmCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_interfaces__srv__ArmCommand_Response__destroy(arm_interfaces__srv__ArmCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_interfaces__srv__ArmCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_interfaces__srv__ArmCommand_Response__Sequence__init(arm_interfaces__srv__ArmCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__ArmCommand_Response * data = NULL;

  if (size) {
    data = (arm_interfaces__srv__ArmCommand_Response *)allocator.zero_allocate(size, sizeof(arm_interfaces__srv__ArmCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_interfaces__srv__ArmCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_interfaces__srv__ArmCommand_Response__fini(&data[i - 1]);
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
arm_interfaces__srv__ArmCommand_Response__Sequence__fini(arm_interfaces__srv__ArmCommand_Response__Sequence * array)
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
      arm_interfaces__srv__ArmCommand_Response__fini(&array->data[i]);
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

arm_interfaces__srv__ArmCommand_Response__Sequence *
arm_interfaces__srv__ArmCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__srv__ArmCommand_Response__Sequence * array = (arm_interfaces__srv__ArmCommand_Response__Sequence *)allocator.allocate(sizeof(arm_interfaces__srv__ArmCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_interfaces__srv__ArmCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_interfaces__srv__ArmCommand_Response__Sequence__destroy(arm_interfaces__srv__ArmCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_interfaces__srv__ArmCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_interfaces__srv__ArmCommand_Response__Sequence__are_equal(const arm_interfaces__srv__ArmCommand_Response__Sequence * lhs, const arm_interfaces__srv__ArmCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_interfaces__srv__ArmCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_interfaces__srv__ArmCommand_Response__Sequence__copy(
  const arm_interfaces__srv__ArmCommand_Response__Sequence * input,
  arm_interfaces__srv__ArmCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arm_interfaces__srv__ArmCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_interfaces__srv__ArmCommand_Response * data =
      (arm_interfaces__srv__ArmCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_interfaces__srv__ArmCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_interfaces__srv__ArmCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_interfaces__srv__ArmCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
