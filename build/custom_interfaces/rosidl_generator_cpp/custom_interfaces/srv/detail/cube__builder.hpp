// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/Cube.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__CUBE__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__CUBE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/cube__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Cube_Request_number
{
public:
  Init_Cube_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::Cube_Request number(::custom_interfaces::srv::Cube_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Cube_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Cube_Request>()
{
  return custom_interfaces::srv::builder::Init_Cube_Request_number();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Cube_Response_result
{
public:
  Init_Cube_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::Cube_Response result(::custom_interfaces::srv::Cube_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Cube_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Cube_Response>()
{
  return custom_interfaces::srv::builder::Init_Cube_Response_result();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_Cube_Event_response
{
public:
  explicit Init_Cube_Event_response(::custom_interfaces::srv::Cube_Event & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::Cube_Event response(::custom_interfaces::srv::Cube_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::Cube_Event msg_;
};

class Init_Cube_Event_request
{
public:
  explicit Init_Cube_Event_request(::custom_interfaces::srv::Cube_Event & msg)
  : msg_(msg)
  {}
  Init_Cube_Event_response request(::custom_interfaces::srv::Cube_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Cube_Event_response(msg_);
  }

private:
  ::custom_interfaces::srv::Cube_Event msg_;
};

class Init_Cube_Event_info
{
public:
  Init_Cube_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cube_Event_request info(::custom_interfaces::srv::Cube_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Cube_Event_request(msg_);
  }

private:
  ::custom_interfaces::srv::Cube_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::Cube_Event>()
{
  return custom_interfaces::srv::builder::Init_Cube_Event_info();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__CUBE__BUILDER_HPP_
