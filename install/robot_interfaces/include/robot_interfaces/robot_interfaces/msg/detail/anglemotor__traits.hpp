// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/Anglemotor.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/anglemotor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Anglemotor & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: p0z0
  {
    out << "p0z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p0z0, out);
    out << ", ";
  }

  // member: p0z1
  {
    out << "p0z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p0z1, out);
    out << ", ";
  }

  // member: p0z2
  {
    out << "p0z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p0z2, out);
    out << ", ";
  }

  // member: p1z0
  {
    out << "p1z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p1z0, out);
    out << ", ";
  }

  // member: p1z1
  {
    out << "p1z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p1z1, out);
    out << ", ";
  }

  // member: p1z2
  {
    out << "p1z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p1z2, out);
    out << ", ";
  }

  // member: p2z0
  {
    out << "p2z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p2z0, out);
    out << ", ";
  }

  // member: p2z1
  {
    out << "p2z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p2z1, out);
    out << ", ";
  }

  // member: p2z2
  {
    out << "p2z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p2z2, out);
    out << ", ";
  }

  // member: p3z0
  {
    out << "p3z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p3z0, out);
    out << ", ";
  }

  // member: p3z1
  {
    out << "p3z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p3z1, out);
    out << ", ";
  }

  // member: p3z2
  {
    out << "p3z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p3z2, out);
    out << ", ";
  }

  // member: armz0
  {
    out << "armz0: ";
    rosidl_generator_traits::value_to_yaml(msg.armz0, out);
    out << ", ";
  }

  // member: armz1
  {
    out << "armz1: ";
    rosidl_generator_traits::value_to_yaml(msg.armz1, out);
    out << ", ";
  }

  // member: armz2
  {
    out << "armz2: ";
    rosidl_generator_traits::value_to_yaml(msg.armz2, out);
    out << ", ";
  }

  // member: armz3
  {
    out << "armz3: ";
    rosidl_generator_traits::value_to_yaml(msg.armz3, out);
    out << ", ";
  }

  // member: armz4
  {
    out << "armz4: ";
    rosidl_generator_traits::value_to_yaml(msg.armz4, out);
    out << ", ";
  }

  // member: gripper
  {
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Anglemotor & msg,
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

  // member: p0z0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p0z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p0z0, out);
    out << "\n";
  }

  // member: p0z1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p0z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p0z1, out);
    out << "\n";
  }

  // member: p0z2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p0z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p0z2, out);
    out << "\n";
  }

  // member: p1z0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p1z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p1z0, out);
    out << "\n";
  }

  // member: p1z1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p1z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p1z1, out);
    out << "\n";
  }

  // member: p1z2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p1z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p1z2, out);
    out << "\n";
  }

  // member: p2z0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p2z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p2z0, out);
    out << "\n";
  }

  // member: p2z1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p2z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p2z1, out);
    out << "\n";
  }

  // member: p2z2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p2z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p2z2, out);
    out << "\n";
  }

  // member: p3z0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p3z0: ";
    rosidl_generator_traits::value_to_yaml(msg.p3z0, out);
    out << "\n";
  }

  // member: p3z1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p3z1: ";
    rosidl_generator_traits::value_to_yaml(msg.p3z1, out);
    out << "\n";
  }

  // member: p3z2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p3z2: ";
    rosidl_generator_traits::value_to_yaml(msg.p3z2, out);
    out << "\n";
  }

  // member: armz0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armz0: ";
    rosidl_generator_traits::value_to_yaml(msg.armz0, out);
    out << "\n";
  }

  // member: armz1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armz1: ";
    rosidl_generator_traits::value_to_yaml(msg.armz1, out);
    out << "\n";
  }

  // member: armz2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armz2: ";
    rosidl_generator_traits::value_to_yaml(msg.armz2, out);
    out << "\n";
  }

  // member: armz3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armz3: ";
    rosidl_generator_traits::value_to_yaml(msg.armz3, out);
    out << "\n";
  }

  // member: armz4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armz4: ";
    rosidl_generator_traits::value_to_yaml(msg.armz4, out);
    out << "\n";
  }

  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Anglemotor & msg, bool use_flow_style = false)
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
  const robot_interfaces::msg::Anglemotor & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::Anglemotor & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::Anglemotor>()
{
  return "robot_interfaces::msg::Anglemotor";
}

template<>
inline const char * name<robot_interfaces::msg::Anglemotor>()
{
  return "robot_interfaces/msg/Anglemotor";
}

template<>
struct has_fixed_size<robot_interfaces::msg::Anglemotor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::msg::Anglemotor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::msg::Anglemotor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ANGLEMOTOR__TRAITS_HPP_
