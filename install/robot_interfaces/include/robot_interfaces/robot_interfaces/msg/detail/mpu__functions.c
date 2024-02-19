// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/Mpu.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/mpu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_interfaces__msg__Mpu__init(robot_interfaces__msg__Mpu * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    robot_interfaces__msg__Mpu__fini(msg);
    return false;
  }
  // acx
  // acy
  // acz
  // gx
  // gy
  // gz
  return true;
}

void
robot_interfaces__msg__Mpu__fini(robot_interfaces__msg__Mpu * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // acx
  // acy
  // acz
  // gx
  // gy
  // gz
}

bool
robot_interfaces__msg__Mpu__are_equal(const robot_interfaces__msg__Mpu * lhs, const robot_interfaces__msg__Mpu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // acx
  if (lhs->acx != rhs->acx) {
    return false;
  }
  // acy
  if (lhs->acy != rhs->acy) {
    return false;
  }
  // acz
  if (lhs->acz != rhs->acz) {
    return false;
  }
  // gx
  if (lhs->gx != rhs->gx) {
    return false;
  }
  // gy
  if (lhs->gy != rhs->gy) {
    return false;
  }
  // gz
  if (lhs->gz != rhs->gz) {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__Mpu__copy(
  const robot_interfaces__msg__Mpu * input,
  robot_interfaces__msg__Mpu * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // acx
  output->acx = input->acx;
  // acy
  output->acy = input->acy;
  // acz
  output->acz = input->acz;
  // gx
  output->gx = input->gx;
  // gy
  output->gy = input->gy;
  // gz
  output->gz = input->gz;
  return true;
}

robot_interfaces__msg__Mpu *
robot_interfaces__msg__Mpu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Mpu * msg = (robot_interfaces__msg__Mpu *)allocator.allocate(sizeof(robot_interfaces__msg__Mpu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__Mpu));
  bool success = robot_interfaces__msg__Mpu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__Mpu__destroy(robot_interfaces__msg__Mpu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__Mpu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__Mpu__Sequence__init(robot_interfaces__msg__Mpu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Mpu * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__Mpu *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__Mpu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__Mpu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__Mpu__fini(&data[i - 1]);
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
robot_interfaces__msg__Mpu__Sequence__fini(robot_interfaces__msg__Mpu__Sequence * array)
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
      robot_interfaces__msg__Mpu__fini(&array->data[i]);
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

robot_interfaces__msg__Mpu__Sequence *
robot_interfaces__msg__Mpu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Mpu__Sequence * array = (robot_interfaces__msg__Mpu__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__Mpu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__Mpu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__Mpu__Sequence__destroy(robot_interfaces__msg__Mpu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__Mpu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__Mpu__Sequence__are_equal(const robot_interfaces__msg__Mpu__Sequence * lhs, const robot_interfaces__msg__Mpu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__Mpu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__Mpu__Sequence__copy(
  const robot_interfaces__msg__Mpu__Sequence * input,
  robot_interfaces__msg__Mpu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__Mpu);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__Mpu * data =
      (robot_interfaces__msg__Mpu *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__Mpu__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__Mpu__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__Mpu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
