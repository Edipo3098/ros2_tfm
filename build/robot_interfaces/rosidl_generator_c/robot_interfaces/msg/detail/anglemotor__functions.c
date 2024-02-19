// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/Anglemotor.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/anglemotor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_interfaces__msg__Anglemotor__init(robot_interfaces__msg__Anglemotor * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    robot_interfaces__msg__Anglemotor__fini(msg);
    return false;
  }
  // p0z0
  // p0z1
  // p0z2
  // p1z0
  // p1z1
  // p1z2
  // p2z0
  // p2z1
  // p2z2
  // p3z0
  // p3z1
  // p3z2
  // armz0
  // armz1
  // armz2
  // armz3
  // armz4
  // gripper
  return true;
}

void
robot_interfaces__msg__Anglemotor__fini(robot_interfaces__msg__Anglemotor * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // p0z0
  // p0z1
  // p0z2
  // p1z0
  // p1z1
  // p1z2
  // p2z0
  // p2z1
  // p2z2
  // p3z0
  // p3z1
  // p3z2
  // armz0
  // armz1
  // armz2
  // armz3
  // armz4
  // gripper
}

bool
robot_interfaces__msg__Anglemotor__are_equal(const robot_interfaces__msg__Anglemotor * lhs, const robot_interfaces__msg__Anglemotor * rhs)
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
  // p0z0
  if (lhs->p0z0 != rhs->p0z0) {
    return false;
  }
  // p0z1
  if (lhs->p0z1 != rhs->p0z1) {
    return false;
  }
  // p0z2
  if (lhs->p0z2 != rhs->p0z2) {
    return false;
  }
  // p1z0
  if (lhs->p1z0 != rhs->p1z0) {
    return false;
  }
  // p1z1
  if (lhs->p1z1 != rhs->p1z1) {
    return false;
  }
  // p1z2
  if (lhs->p1z2 != rhs->p1z2) {
    return false;
  }
  // p2z0
  if (lhs->p2z0 != rhs->p2z0) {
    return false;
  }
  // p2z1
  if (lhs->p2z1 != rhs->p2z1) {
    return false;
  }
  // p2z2
  if (lhs->p2z2 != rhs->p2z2) {
    return false;
  }
  // p3z0
  if (lhs->p3z0 != rhs->p3z0) {
    return false;
  }
  // p3z1
  if (lhs->p3z1 != rhs->p3z1) {
    return false;
  }
  // p3z2
  if (lhs->p3z2 != rhs->p3z2) {
    return false;
  }
  // armz0
  if (lhs->armz0 != rhs->armz0) {
    return false;
  }
  // armz1
  if (lhs->armz1 != rhs->armz1) {
    return false;
  }
  // armz2
  if (lhs->armz2 != rhs->armz2) {
    return false;
  }
  // armz3
  if (lhs->armz3 != rhs->armz3) {
    return false;
  }
  // armz4
  if (lhs->armz4 != rhs->armz4) {
    return false;
  }
  // gripper
  if (lhs->gripper != rhs->gripper) {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__Anglemotor__copy(
  const robot_interfaces__msg__Anglemotor * input,
  robot_interfaces__msg__Anglemotor * output)
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
  // p0z0
  output->p0z0 = input->p0z0;
  // p0z1
  output->p0z1 = input->p0z1;
  // p0z2
  output->p0z2 = input->p0z2;
  // p1z0
  output->p1z0 = input->p1z0;
  // p1z1
  output->p1z1 = input->p1z1;
  // p1z2
  output->p1z2 = input->p1z2;
  // p2z0
  output->p2z0 = input->p2z0;
  // p2z1
  output->p2z1 = input->p2z1;
  // p2z2
  output->p2z2 = input->p2z2;
  // p3z0
  output->p3z0 = input->p3z0;
  // p3z1
  output->p3z1 = input->p3z1;
  // p3z2
  output->p3z2 = input->p3z2;
  // armz0
  output->armz0 = input->armz0;
  // armz1
  output->armz1 = input->armz1;
  // armz2
  output->armz2 = input->armz2;
  // armz3
  output->armz3 = input->armz3;
  // armz4
  output->armz4 = input->armz4;
  // gripper
  output->gripper = input->gripper;
  return true;
}

robot_interfaces__msg__Anglemotor *
robot_interfaces__msg__Anglemotor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Anglemotor * msg = (robot_interfaces__msg__Anglemotor *)allocator.allocate(sizeof(robot_interfaces__msg__Anglemotor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__Anglemotor));
  bool success = robot_interfaces__msg__Anglemotor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__Anglemotor__destroy(robot_interfaces__msg__Anglemotor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__Anglemotor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__Anglemotor__Sequence__init(robot_interfaces__msg__Anglemotor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Anglemotor * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__Anglemotor *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__Anglemotor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__Anglemotor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__Anglemotor__fini(&data[i - 1]);
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
robot_interfaces__msg__Anglemotor__Sequence__fini(robot_interfaces__msg__Anglemotor__Sequence * array)
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
      robot_interfaces__msg__Anglemotor__fini(&array->data[i]);
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

robot_interfaces__msg__Anglemotor__Sequence *
robot_interfaces__msg__Anglemotor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Anglemotor__Sequence * array = (robot_interfaces__msg__Anglemotor__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__Anglemotor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__Anglemotor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__Anglemotor__Sequence__destroy(robot_interfaces__msg__Anglemotor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__Anglemotor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__Anglemotor__Sequence__are_equal(const robot_interfaces__msg__Anglemotor__Sequence * lhs, const robot_interfaces__msg__Anglemotor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__Anglemotor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__Anglemotor__Sequence__copy(
  const robot_interfaces__msg__Anglemotor__Sequence * input,
  robot_interfaces__msg__Anglemotor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__Anglemotor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__Anglemotor * data =
      (robot_interfaces__msg__Anglemotor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__Anglemotor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__Anglemotor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__Anglemotor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
