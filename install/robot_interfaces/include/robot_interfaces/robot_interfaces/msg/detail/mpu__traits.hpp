// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/Mpu.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__MPU__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__MPU__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/mpu__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Mpu & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: acx
  {
    out << "acx: ";
    rosidl_generator_traits::value_to_yaml(msg.acx, out);
    out << ", ";
  }

  // member: acy
  {
    out << "acy: ";
    rosidl_generator_traits::value_to_yaml(msg.acy, out);
    out << ", ";
  }

  // member: acz
  {
    out << "acz: ";
    rosidl_generator_traits::value_to_yaml(msg.acz, out);
    out << ", ";
  }

  // member: gx
  {
    out << "gx: ";
    rosidl_generator_traits::value_to_yaml(msg.gx, out);
    out << ", ";
  }

  // member: gy
  {
    out << "gy: ";
    rosidl_generator_traits::value_to_yaml(msg.gy, out);
    out << ", ";
  }

  // member: gz
  {
    out << "gz: ";
    rosidl_generator_traits::value_to_yaml(msg.gz, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mpu & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: acx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acx: ";
    rosidl_generator_traits::value_to_yaml(msg.acx, out);
    out << "\n";
  }

  // member: acy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acy: ";
    rosidl_generator_traits::value_to_yaml(msg.acy, out);
    out << "\n";
  }

  // member: acz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acz: ";
    rosidl_generator_traits::value_to_yaml(msg.acz, out);
    out << "\n";
  }

  // member: gx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gx: ";
    rosidl_generator_traits::value_to_yaml(msg.gx, out);
    out << "\n";
  }

  // member: gy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gy: ";
    rosidl_generator_traits::value_to_yaml(msg.gy, out);
    out << "\n";
  }

  // member: gz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gz: ";
    rosidl_generator_traits::value_to_yaml(msg.gz, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mpu & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::msg::Mpu & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::Mpu & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::Mpu>()
{
  return "robot_interfaces::msg::Mpu";
}

template<>
inline const char * name<robot_interfaces::msg::Mpu>()
{
  return "robot_interfaces/msg/Mpu";
}

template<>
struct has_fixed_size<robot_interfaces::msg::Mpu>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::msg::Mpu>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::msg::Mpu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__MPU__TRAITS_HPP_
