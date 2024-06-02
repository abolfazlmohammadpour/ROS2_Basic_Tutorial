// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_interfaces:msg/UnsignedInteger.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__UNSIGNED_INTEGER__STRUCT_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__UNSIGNED_INTEGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_interfaces__msg__UnsignedInteger __attribute__((deprecated))
#else
# define DEPRECATED__custom_interfaces__msg__UnsignedInteger __declspec(deprecated)
#endif

namespace custom_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnsignedInteger_
{
  using Type = UnsignedInteger_<ContainerAllocator>;

  explicit UnsignedInteger_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ull;
    }
  }

  explicit UnsignedInteger_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0ull;
    }
  }

  // field types and members
  using _data_type =
    uint64_t;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const uint64_t & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_interfaces::msg::UnsignedInteger_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_interfaces::msg::UnsignedInteger_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::UnsignedInteger_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_interfaces::msg::UnsignedInteger_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_interfaces__msg__UnsignedInteger
    std::shared_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_interfaces__msg__UnsignedInteger
    std::shared_ptr<custom_interfaces::msg::UnsignedInteger_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnsignedInteger_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnsignedInteger_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnsignedInteger_

// alias to use template instance with default allocator
using UnsignedInteger =
  custom_interfaces::msg::UnsignedInteger_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__UNSIGNED_INTEGER__STRUCT_HPP_
