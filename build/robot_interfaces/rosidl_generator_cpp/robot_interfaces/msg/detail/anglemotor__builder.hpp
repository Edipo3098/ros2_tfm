// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Anglemotor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/anglemotor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Anglemotor_gripper
{
public:
  explicit Init_Anglemotor_gripper(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Anglemotor gripper(::robot_interfaces::msg::Anglemotor::_gripper_type arg)
  {
    msg_.gripper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_armz4
{
public:
  explicit Init_Anglemotor_armz4(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_gripper armz4(::robot_interfaces::msg::Anglemotor::_armz4_type arg)
  {
    msg_.armz4 = std::move(arg);
    return Init_Anglemotor_gripper(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_armz3
{
public:
  explicit Init_Anglemotor_armz3(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_armz4 armz3(::robot_interfaces::msg::Anglemotor::_armz3_type arg)
  {
    msg_.armz3 = std::move(arg);
    return Init_Anglemotor_armz4(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_armz2
{
public:
  explicit Init_Anglemotor_armz2(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_armz3 armz2(::robot_interfaces::msg::Anglemotor::_armz2_type arg)
  {
    msg_.armz2 = std::move(arg);
    return Init_Anglemotor_armz3(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_armz1
{
public:
  explicit Init_Anglemotor_armz1(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_armz2 armz1(::robot_interfaces::msg::Anglemotor::_armz1_type arg)
  {
    msg_.armz1 = std::move(arg);
    return Init_Anglemotor_armz2(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_armz0
{
public:
  explicit Init_Anglemotor_armz0(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_armz1 armz0(::robot_interfaces::msg::Anglemotor::_armz0_type arg)
  {
    msg_.armz0 = std::move(arg);
    return Init_Anglemotor_armz1(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p3z2
{
public:
  explicit Init_Anglemotor_p3z2(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_armz0 p3z2(::robot_interfaces::msg::Anglemotor::_p3z2_type arg)
  {
    msg_.p3z2 = std::move(arg);
    return Init_Anglemotor_armz0(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p3z1
{
public:
  explicit Init_Anglemotor_p3z1(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p3z2 p3z1(::robot_interfaces::msg::Anglemotor::_p3z1_type arg)
  {
    msg_.p3z1 = std::move(arg);
    return Init_Anglemotor_p3z2(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p3z0
{
public:
  explicit Init_Anglemotor_p3z0(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p3z1 p3z0(::robot_interfaces::msg::Anglemotor::_p3z0_type arg)
  {
    msg_.p3z0 = std::move(arg);
    return Init_Anglemotor_p3z1(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p2z2
{
public:
  explicit Init_Anglemotor_p2z2(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p3z0 p2z2(::robot_interfaces::msg::Anglemotor::_p2z2_type arg)
  {
    msg_.p2z2 = std::move(arg);
    return Init_Anglemotor_p3z0(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p2z1
{
public:
  explicit Init_Anglemotor_p2z1(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p2z2 p2z1(::robot_interfaces::msg::Anglemotor::_p2z1_type arg)
  {
    msg_.p2z1 = std::move(arg);
    return Init_Anglemotor_p2z2(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p2z0
{
public:
  explicit Init_Anglemotor_p2z0(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p2z1 p2z0(::robot_interfaces::msg::Anglemotor::_p2z0_type arg)
  {
    msg_.p2z0 = std::move(arg);
    return Init_Anglemotor_p2z1(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p1z2
{
public:
  explicit Init_Anglemotor_p1z2(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p2z0 p1z2(::robot_interfaces::msg::Anglemotor::_p1z2_type arg)
  {
    msg_.p1z2 = std::move(arg);
    return Init_Anglemotor_p2z0(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p1z1
{
public:
  explicit Init_Anglemotor_p1z1(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p1z2 p1z1(::robot_interfaces::msg::Anglemotor::_p1z1_type arg)
  {
    msg_.p1z1 = std::move(arg);
    return Init_Anglemotor_p1z2(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p1z0
{
public:
  explicit Init_Anglemotor_p1z0(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p1z1 p1z0(::robot_interfaces::msg::Anglemotor::_p1z0_type arg)
  {
    msg_.p1z0 = std::move(arg);
    return Init_Anglemotor_p1z1(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p0z2
{
public:
  explicit Init_Anglemotor_p0z2(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p1z0 p0z2(::robot_interfaces::msg::Anglemotor::_p0z2_type arg)
  {
    msg_.p0z2 = std::move(arg);
    return Init_Anglemotor_p1z0(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p0z1
{
public:
  explicit Init_Anglemotor_p0z1(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p0z2 p0z1(::robot_interfaces::msg::Anglemotor::_p0z1_type arg)
  {
    msg_.p0z1 = std::move(arg);
    return Init_Anglemotor_p0z2(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_p0z0
{
public:
  explicit Init_Anglemotor_p0z0(::robot_interfaces::msg::Anglemotor & msg)
  : msg_(msg)
  {}
  Init_Anglemotor_p0z1 p0z0(::robot_interfaces::msg::Anglemotor::_p0z0_type arg)
  {
    msg_.p0z0 = std::move(arg);
    return Init_Anglemotor_p0z1(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

class Init_Anglemotor_message
{
public:
  Init_Anglemotor_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Anglemotor_p0z0 message(::robot_interfaces::msg::Anglemotor::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Anglemotor_p0z0(msg_);
  }

private:
  ::robot_interfaces::msg::Anglemotor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Anglemotor>()
{
  return robot_interfaces::msg::builder::Init_Anglemotor_message();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__BUILDER_HPP_
