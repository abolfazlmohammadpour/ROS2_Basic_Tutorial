// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces:srv/Square.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces/srv/detail/square__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces/srv/detail/square__functions.h"
#include "custom_interfaces/srv/detail/square__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__Square_Request__init(message_memory);
}

void custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_fini_function(void * message_memory)
{
  custom_interfaces__srv__Square_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_member_array[1] = {
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Square_Request, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_members = {
  "custom_interfaces__srv",  // message namespace
  "Square_Request",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__srv__Square_Request),
  custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_member_array,  // message members
  custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_type_support_handle = {
  0,
  &custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_members,
  get_message_typesupport_handle_function,
  &custom_interfaces__srv__Square_Request__get_type_hash,
  &custom_interfaces__srv__Square_Request__get_type_description,
  &custom_interfaces__srv__Square_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Request)() {
  if (!custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/srv/detail/square__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/srv/detail/square__functions.h"
// already included above
// #include "custom_interfaces/srv/detail/square__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__Square_Response__init(message_memory);
}

void custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_fini_function(void * message_memory)
{
  custom_interfaces__srv__Square_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Square_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_members = {
  "custom_interfaces__srv",  // message namespace
  "Square_Response",  // message name
  1,  // number of fields
  sizeof(custom_interfaces__srv__Square_Response),
  custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_member_array,  // message members
  custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_type_support_handle = {
  0,
  &custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_members,
  get_message_typesupport_handle_function,
  &custom_interfaces__srv__Square_Response__get_type_hash,
  &custom_interfaces__srv__Square_Response__get_type_description,
  &custom_interfaces__srv__Square_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Response)() {
  if (!custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces/srv/detail/square__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces/srv/detail/square__functions.h"
// already included above
// #include "custom_interfaces/srv/detail/square__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "custom_interfaces/srv/square.h"
// Member `request`
// Member `response`
// already included above
// #include "custom_interfaces/srv/detail/square__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces__srv__Square_Event__init(message_memory);
}

void custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_fini_function(void * message_memory)
{
  custom_interfaces__srv__Square_Event__fini(message_memory);
}

size_t custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__size_function__Square_Event__request(
  const void * untyped_member)
{
  const custom_interfaces__srv__Square_Request__Sequence * member =
    (const custom_interfaces__srv__Square_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_const_function__Square_Event__request(
  const void * untyped_member, size_t index)
{
  const custom_interfaces__srv__Square_Request__Sequence * member =
    (const custom_interfaces__srv__Square_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_function__Square_Event__request(
  void * untyped_member, size_t index)
{
  custom_interfaces__srv__Square_Request__Sequence * member =
    (custom_interfaces__srv__Square_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__fetch_function__Square_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_interfaces__srv__Square_Request * item =
    ((const custom_interfaces__srv__Square_Request *)
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_const_function__Square_Event__request(untyped_member, index));
  custom_interfaces__srv__Square_Request * value =
    (custom_interfaces__srv__Square_Request *)(untyped_value);
  *value = *item;
}

void custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__assign_function__Square_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_interfaces__srv__Square_Request * item =
    ((custom_interfaces__srv__Square_Request *)
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_function__Square_Event__request(untyped_member, index));
  const custom_interfaces__srv__Square_Request * value =
    (const custom_interfaces__srv__Square_Request *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__resize_function__Square_Event__request(
  void * untyped_member, size_t size)
{
  custom_interfaces__srv__Square_Request__Sequence * member =
    (custom_interfaces__srv__Square_Request__Sequence *)(untyped_member);
  custom_interfaces__srv__Square_Request__Sequence__fini(member);
  return custom_interfaces__srv__Square_Request__Sequence__init(member, size);
}

size_t custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__size_function__Square_Event__response(
  const void * untyped_member)
{
  const custom_interfaces__srv__Square_Response__Sequence * member =
    (const custom_interfaces__srv__Square_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_const_function__Square_Event__response(
  const void * untyped_member, size_t index)
{
  const custom_interfaces__srv__Square_Response__Sequence * member =
    (const custom_interfaces__srv__Square_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_function__Square_Event__response(
  void * untyped_member, size_t index)
{
  custom_interfaces__srv__Square_Response__Sequence * member =
    (custom_interfaces__srv__Square_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__fetch_function__Square_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const custom_interfaces__srv__Square_Response * item =
    ((const custom_interfaces__srv__Square_Response *)
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_const_function__Square_Event__response(untyped_member, index));
  custom_interfaces__srv__Square_Response * value =
    (custom_interfaces__srv__Square_Response *)(untyped_value);
  *value = *item;
}

void custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__assign_function__Square_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  custom_interfaces__srv__Square_Response * item =
    ((custom_interfaces__srv__Square_Response *)
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_function__Square_Event__response(untyped_member, index));
  const custom_interfaces__srv__Square_Response * value =
    (const custom_interfaces__srv__Square_Response *)(untyped_value);
  *item = *value;
}

bool custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__resize_function__Square_Event__response(
  void * untyped_member, size_t size)
{
  custom_interfaces__srv__Square_Response__Sequence * member =
    (custom_interfaces__srv__Square_Response__Sequence *)(untyped_member);
  custom_interfaces__srv__Square_Response__Sequence__fini(member);
  return custom_interfaces__srv__Square_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces__srv__Square_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(custom_interfaces__srv__Square_Event, request),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__size_function__Square_Event__request,  // size() function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_const_function__Square_Event__request,  // get_const(index) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_function__Square_Event__request,  // get(index) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__fetch_function__Square_Event__request,  // fetch(index, &value) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__assign_function__Square_Event__request,  // assign(index, value) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__resize_function__Square_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(custom_interfaces__srv__Square_Event, response),  // bytes offset in struct
    NULL,  // default value
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__size_function__Square_Event__response,  // size() function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_const_function__Square_Event__response,  // get_const(index) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__get_function__Square_Event__response,  // get(index) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__fetch_function__Square_Event__response,  // fetch(index, &value) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__assign_function__Square_Event__response,  // assign(index, value) function pointer
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__resize_function__Square_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_members = {
  "custom_interfaces__srv",  // message namespace
  "Square_Event",  // message name
  3,  // number of fields
  sizeof(custom_interfaces__srv__Square_Event),
  custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_member_array,  // message members
  custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_type_support_handle = {
  0,
  &custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_members,
  get_message_typesupport_handle_function,
  &custom_interfaces__srv__Square_Event__get_type_hash,
  &custom_interfaces__srv__Square_Event__get_type_description,
  &custom_interfaces__srv__Square_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Event)() {
  custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Request)();
  custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Response)();
  if (!custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_type_support_handle.typesupport_identifier) {
    custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces/srv/detail/square__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_service_members = {
  "custom_interfaces__srv",  // service namespace
  "Square",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_Request_message_type_support_handle,
  NULL,  // response message
  // custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_Response_message_type_support_handle
  NULL  // event_message
  // custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_Response_message_type_support_handle
};


static rosidl_service_type_support_t custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_service_type_support_handle = {
  0,
  &custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_service_members,
  get_service_typesupport_handle_function,
  &custom_interfaces__srv__Square_Request__rosidl_typesupport_introspection_c__Square_Request_message_type_support_handle,
  &custom_interfaces__srv__Square_Response__rosidl_typesupport_introspection_c__Square_Response_message_type_support_handle,
  &custom_interfaces__srv__Square_Event__rosidl_typesupport_introspection_c__Square_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    srv,
    Square
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    custom_interfaces,
    srv,
    Square
  ),
  &custom_interfaces__srv__Square__get_type_hash,
  &custom_interfaces__srv__Square__get_type_description,
  &custom_interfaces__srv__Square__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square)() {
  if (!custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_service_type_support_handle.typesupport_identifier) {
    custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces, srv, Square_Event)()->data;
  }

  return &custom_interfaces__srv__detail__square__rosidl_typesupport_introspection_c__Square_service_type_support_handle;
}
