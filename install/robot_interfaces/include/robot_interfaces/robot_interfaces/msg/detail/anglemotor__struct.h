// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Anglemotor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__STRUCT_H_

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

/// Struct defined in msg/Anglemotor in the package robot_interfaces.
typedef struct robot_interfaces__msg__Anglemotor
{
  rosidl_runtime_c__String message;
  double p0z0;
  double p0z1;
  double p0z2;
  double p1z0;
  double p1z1;
  double p1z2;
  double p2z0;
  double p2z1;
  double p2z2;
  double p3z0;
  double p3z1;
  double p3z2;
  double armz0;
  double armz1;
  double armz2;
  double armz3;
  double armz4;
  double gripper;
} robot_interfaces__msg__Anglemotor;

// Struct for a sequence of robot_interfaces__msg__Anglemotor.
typedef struct robot_interfaces__msg__Anglemotor__Sequence
{
  robot_interfaces__msg__Anglemotor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Anglemotor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__STRUCT_H_
