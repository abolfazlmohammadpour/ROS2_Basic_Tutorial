// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/String.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__STRING__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/String in the package custom_interfaces.
typedef struct custom_interfaces__msg__String
{
  rosidl_runtime_c__String data;
} custom_interfaces__msg__String;

// Struct for a sequence of custom_interfaces__msg__String.
typedef struct custom_interfaces__msg__String__Sequence
{
  custom_interfaces__msg__String * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__String__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__STRING__STRUCT_H_
