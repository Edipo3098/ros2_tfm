// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MPU__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MPU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/mpu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Mpu_gz
{
public:
  explicit Init_Mpu_gz(::robot_interfaces::msg::Mpu & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Mpu gz(::robot_interfaces::msg::Mpu::_gz_type arg)
  {
    msg_.gz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Mpu msg_;
};

class Init_Mpu_gy
{
public:
  explicit Init_Mpu_gy(::robot_interfaces::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_gz gy(::robot_interfaces::msg::Mpu::_gy_type arg)
  {
    msg_.gy = std::move(arg);
    return Init_Mpu_gz(msg_);
  }

private:
  ::robot_interfaces::msg::Mpu msg_;
};

class Init_Mpu_gx
{
public:
  explicit Init_Mpu_gx(::robot_interfaces::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_gy gx(::robot_interfaces::msg::Mpu::_gx_type arg)
  {
    msg_.gx = std::move(arg);
    return Init_Mpu_gy(msg_);
  }

private:
  ::robot_interfaces::msg::Mpu msg_;
};

class Init_Mpu_acz
{
public:
  explicit Init_Mpu_acz(::robot_interfaces::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_gx acz(::robot_interfaces::msg::Mpu::_acz_type arg)
  {
    msg_.acz = std::move(arg);
    return Init_Mpu_gx(msg_);
  }

private:
  ::robot_interfaces::msg::Mpu msg_;
};

class Init_Mpu_acy
{
public:
  explicit Init_Mpu_acy(::robot_interfaces::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_acz acy(::robot_interfaces::msg::Mpu::_acy_type arg)
  {
    msg_.acy = std::move(arg);
    return Init_Mpu_acz(msg_);
  }

private:
  ::robot_interfaces::msg::Mpu msg_;
};

class Init_Mpu_acx
{
public:
  explicit Init_Mpu_acx(::robot_interfaces::msg::Mpu & msg)
  : msg_(msg)
  {}
  Init_Mpu_acy acx(::robot_interfaces::msg::Mpu::_acx_type arg)
  {
    msg_.acx = std::move(arg);
    return Init_Mpu_acy(msg_);
  }

private:
  ::robot_interfaces::msg::Mpu msg_;
};

class Init_Mpu_message
{
public:
  Init_Mpu_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mpu_acx message(::robot_interfaces::msg::Mpu::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Mpu_acx(msg_);
  }

private:
  ::robot_interfaces::msg::Mpu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Mpu>()
{
  return robot_interfaces::msg::builder::Init_Mpu_message();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MPU__BUILDER_HPP_
