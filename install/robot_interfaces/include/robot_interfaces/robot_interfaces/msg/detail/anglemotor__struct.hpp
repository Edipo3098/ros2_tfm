// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/Anglemotor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__Anglemotor __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__Anglemotor __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Anglemotor_
{
  using Type = Anglemotor_<ContainerAllocator>;

  explicit Anglemotor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->p0z0 = 0.0;
      this->p0z1 = 0.0;
      this->p0z2 = 0.0;
      this->p1z0 = 0.0;
      this->p1z1 = 0.0;
      this->p1z2 = 0.0;
      this->p2z0 = 0.0;
      this->p2z1 = 0.0;
      this->p2z2 = 0.0;
      this->p3z0 = 0.0;
      this->p3z1 = 0.0;
      this->p3z2 = 0.0;
      this->armz0 = 0.0;
      this->armz1 = 0.0;
      this->armz2 = 0.0;
      this->armz3 = 0.0;
      this->armz4 = 0.0;
      this->gripper = 0.0;
    }
  }

  explicit Anglemotor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->p0z0 = 0.0;
      this->p0z1 = 0.0;
      this->p0z2 = 0.0;
      this->p1z0 = 0.0;
      this->p1z1 = 0.0;
      this->p1z2 = 0.0;
      this->p2z0 = 0.0;
      this->p2z1 = 0.0;
      this->p2z2 = 0.0;
      this->p3z0 = 0.0;
      this->p3z1 = 0.0;
      this->p3z2 = 0.0;
      this->armz0 = 0.0;
      this->armz1 = 0.0;
      this->armz2 = 0.0;
      this->armz3 = 0.0;
      this->armz4 = 0.0;
      this->gripper = 0.0;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _p0z0_type =
    double;
  _p0z0_type p0z0;
  using _p0z1_type =
    double;
  _p0z1_type p0z1;
  using _p0z2_type =
    double;
  _p0z2_type p0z2;
  using _p1z0_type =
    double;
  _p1z0_type p1z0;
  using _p1z1_type =
    double;
  _p1z1_type p1z1;
  using _p1z2_type =
    double;
  _p1z2_type p1z2;
  using _p2z0_type =
    double;
  _p2z0_type p2z0;
  using _p2z1_type =
    double;
  _p2z1_type p2z1;
  using _p2z2_type =
    double;
  _p2z2_type p2z2;
  using _p3z0_type =
    double;
  _p3z0_type p3z0;
  using _p3z1_type =
    double;
  _p3z1_type p3z1;
  using _p3z2_type =
    double;
  _p3z2_type p3z2;
  using _armz0_type =
    double;
  _armz0_type armz0;
  using _armz1_type =
    double;
  _armz1_type armz1;
  using _armz2_type =
    double;
  _armz2_type armz2;
  using _armz3_type =
    double;
  _armz3_type armz3;
  using _armz4_type =
    double;
  _armz4_type armz4;
  using _gripper_type =
    double;
  _gripper_type gripper;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__p0z0(
    const double & _arg)
  {
    this->p0z0 = _arg;
    return *this;
  }
  Type & set__p0z1(
    const double & _arg)
  {
    this->p0z1 = _arg;
    return *this;
  }
  Type & set__p0z2(
    const double & _arg)
  {
    this->p0z2 = _arg;
    return *this;
  }
  Type & set__p1z0(
    const double & _arg)
  {
    this->p1z0 = _arg;
    return *this;
  }
  Type & set__p1z1(
    const double & _arg)
  {
    this->p1z1 = _arg;
    return *this;
  }
  Type & set__p1z2(
    const double & _arg)
  {
    this->p1z2 = _arg;
    return *this;
  }
  Type & set__p2z0(
    const double & _arg)
  {
    this->p2z0 = _arg;
    return *this;
  }
  Type & set__p2z1(
    const double & _arg)
  {
    this->p2z1 = _arg;
    return *this;
  }
  Type & set__p2z2(
    const double & _arg)
  {
    this->p2z2 = _arg;
    return *this;
  }
  Type & set__p3z0(
    const double & _arg)
  {
    this->p3z0 = _arg;
    return *this;
  }
  Type & set__p3z1(
    const double & _arg)
  {
    this->p3z1 = _arg;
    return *this;
  }
  Type & set__p3z2(
    const double & _arg)
  {
    this->p3z2 = _arg;
    return *this;
  }
  Type & set__armz0(
    const double & _arg)
  {
    this->armz0 = _arg;
    return *this;
  }
  Type & set__armz1(
    const double & _arg)
  {
    this->armz1 = _arg;
    return *this;
  }
  Type & set__armz2(
    const double & _arg)
  {
    this->armz2 = _arg;
    return *this;
  }
  Type & set__armz3(
    const double & _arg)
  {
    this->armz3 = _arg;
    return *this;
  }
  Type & set__armz4(
    const double & _arg)
  {
    this->armz4 = _arg;
    return *this;
  }
  Type & set__gripper(
    const double & _arg)
  {
    this->gripper = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::Anglemotor_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::Anglemotor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Anglemotor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Anglemotor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__Anglemotor
    std::shared_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__Anglemotor
    std::shared_ptr<robot_interfaces::msg::Anglemotor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Anglemotor_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->p0z0 != other.p0z0) {
      return false;
    }
    if (this->p0z1 != other.p0z1) {
      return false;
    }
    if (this->p0z2 != other.p0z2) {
      return false;
    }
    if (this->p1z0 != other.p1z0) {
      return false;
    }
    if (this->p1z1 != other.p1z1) {
      return false;
    }
    if (this->p1z2 != other.p1z2) {
      return false;
    }
    if (this->p2z0 != other.p2z0) {
      return false;
    }
    if (this->p2z1 != other.p2z1) {
      return false;
    }
    if (this->p2z2 != other.p2z2) {
      return false;
    }
    if (this->p3z0 != other.p3z0) {
      return false;
    }
    if (this->p3z1 != other.p3z1) {
      return false;
    }
    if (this->p3z2 != other.p3z2) {
      return false;
    }
    if (this->armz0 != other.armz0) {
      return false;
    }
    if (this->armz1 != other.armz1) {
      return false;
    }
    if (this->armz2 != other.armz2) {
      return false;
    }
    if (this->armz3 != other.armz3) {
      return false;
    }
    if (this->armz4 != other.armz4) {
      return false;
    }
    if (this->gripper != other.gripper) {
      return false;
    }
    return true;
  }
  bool operator!=(const Anglemotor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Anglemotor_

// alias to use template instance with default allocator
using Anglemotor =
  robot_interfaces::msg::Anglemotor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__STRUCT_HPP_
