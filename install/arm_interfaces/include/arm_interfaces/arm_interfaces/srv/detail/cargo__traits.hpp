// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_interfaces:srv/Cargo.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__CARGO__TRAITS_HPP_
#define ARM_INTERFACES__SRV__DETAIL__CARGO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_interfaces/srv/detail/cargo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Cargo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: slot
  {
    out << "slot: ";
    rosidl_generator_traits::value_to_yaml(msg.slot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cargo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: slot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slot: ";
    rosidl_generator_traits::value_to_yaml(msg.slot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cargo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_interfaces::srv::Cargo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::srv::Cargo_Request & msg)
{
  return arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::srv::Cargo_Request>()
{
  return "arm_interfaces::srv::Cargo_Request";
}

template<>
inline const char * name<arm_interfaces::srv::Cargo_Request>()
{
  return "arm_interfaces/srv/Cargo_Request";
}

template<>
struct has_fixed_size<arm_interfaces::srv::Cargo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_interfaces::srv::Cargo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_interfaces::srv::Cargo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Cargo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: slot
  {
    out << "slot: ";
    rosidl_generator_traits::value_to_yaml(msg.slot, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Cargo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: slot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slot: ";
    rosidl_generator_traits::value_to_yaml(msg.slot, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Cargo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_interfaces::srv::Cargo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::srv::Cargo_Response & msg)
{
  return arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::srv::Cargo_Response>()
{
  return "arm_interfaces::srv::Cargo_Response";
}

template<>
inline const char * name<arm_interfaces::srv::Cargo_Response>()
{
  return "arm_interfaces/srv/Cargo_Response";
}

template<>
struct has_fixed_size<arm_interfaces::srv::Cargo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_interfaces::srv::Cargo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_interfaces::srv::Cargo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_interfaces::srv::Cargo>()
{
  return "arm_interfaces::srv::Cargo";
}

template<>
inline const char * name<arm_interfaces::srv::Cargo>()
{
  return "arm_interfaces/srv/Cargo";
}

template<>
struct has_fixed_size<arm_interfaces::srv::Cargo>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_interfaces::srv::Cargo_Request>::value &&
    has_fixed_size<arm_interfaces::srv::Cargo_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_interfaces::srv::Cargo>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_interfaces::srv::Cargo_Request>::value &&
    has_bounded_size<arm_interfaces::srv::Cargo_Response>::value
  >
{
};

template<>
struct is_service<arm_interfaces::srv::Cargo>
  : std::true_type
{
};

template<>
struct is_service_request<arm_interfaces::srv::Cargo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_interfaces::srv::Cargo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARM_INTERFACES__SRV__DETAIL__CARGO__TRAITS_HPP_
