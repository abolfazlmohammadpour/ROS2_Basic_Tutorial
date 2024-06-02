// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/String.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/string__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__String__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x7b, 0xf2, 0x3a, 0xe4, 0xd3, 0xc3, 0x75,
      0x70, 0xd0, 0x23, 0xb1, 0x87, 0x1a, 0xf9, 0xc2,
      0xed, 0xb6, 0xe6, 0x29, 0xea, 0xb8, 0xc8, 0x1e,
      0xca, 0xcb, 0xfa, 0xee, 0x31, 0x78, 0x22, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__String__TYPE_NAME[] = "custom_interfaces/msg/String";

// Define type names, field names, and default values
static char custom_interfaces__msg__String__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__String__FIELDS[] = {
  {
    {custom_interfaces__msg__String__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__String__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__String__TYPE_NAME, 28, 28},
      {custom_interfaces__msg__String__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__String__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__String__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 11, 11},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__String__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__String__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
