// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_interfaces:msg/UnsignedInteger.idl
// generated code does not contain a copyright notice

#include "custom_interfaces/msg/detail/unsigned_integer__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
const rosidl_type_hash_t *
custom_interfaces__msg__UnsignedInteger__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9a, 0x0f, 0x85, 0x22, 0x08, 0x2c, 0x07, 0xc2,
      0x48, 0x2b, 0x86, 0x04, 0xfe, 0x66, 0xd9, 0xed,
      0x55, 0xdf, 0xdf, 0xd1, 0x5c, 0xa3, 0xd1, 0xa9,
      0x5b, 0xcd, 0x3c, 0x6b, 0xfa, 0xa9, 0x9e, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char custom_interfaces__msg__UnsignedInteger__TYPE_NAME[] = "custom_interfaces/msg/UnsignedInteger";

// Define type names, field names, and default values
static char custom_interfaces__msg__UnsignedInteger__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field custom_interfaces__msg__UnsignedInteger__FIELDS[] = {
  {
    {custom_interfaces__msg__UnsignedInteger__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_interfaces__msg__UnsignedInteger__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_interfaces__msg__UnsignedInteger__TYPE_NAME, 37, 37},
      {custom_interfaces__msg__UnsignedInteger__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint64 data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_interfaces__msg__UnsignedInteger__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_interfaces__msg__UnsignedInteger__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 11, 11},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_interfaces__msg__UnsignedInteger__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_interfaces__msg__UnsignedInteger__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
