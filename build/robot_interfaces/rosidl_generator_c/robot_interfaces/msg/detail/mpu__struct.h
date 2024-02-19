// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MPU__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__MPU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Mpu in the package robot_interfaces.
typedef struct robot_interfaces__msg__Mpu
{
  rosidl_runtime_c__String message;
  double acx;
  double acy;
  double acz;
  double gx;
  double gy;
  double gz;
} robot_interfaces__msg__Mpu;

// Struct for a sequence of robot_interfaces__msg__Mpu.
typedef struct robot_interfaces__msg__Mpu__Sequence
{
  robot_interfaces__msg__Mpu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Mpu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MPU__STRUCT_H_
