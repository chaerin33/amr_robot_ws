// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_interfaces:srv/GetTargetPose.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__TRAITS_HPP_
#define ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_interfaces/srv/detail/get_target_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTargetPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_color
  {
    out << "target_color: ";
    rosidl_generator_traits::value_to_yaml(msg.target_color, out);
    out << ", ";
  }

  // member: target_size
  {
    out << "target_size: ";
    rosidl_generator_traits::value_to_yaml(msg.target_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTargetPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_color: ";
    rosidl_generator_traits::value_to_yaml(msg.target_color, out);
    out << "\n";
  }

  // member: target_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_size: ";
    rosidl_generator_traits::value_to_yaml(msg.target_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTargetPose_Request & msg, bool use_flow_style = false)
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
  const arm_interfaces::srv::GetTargetPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::srv::GetTargetPose_Request & msg)
{
  return arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::srv::GetTargetPose_Request>()
{
  return "arm_interfaces::srv::GetTargetPose_Request";
}

template<>
inline const char * name<arm_interfaces::srv::GetTargetPose_Request>()
{
  return "arm_interfaces/srv/GetTargetPose_Request";
}

template<>
struct has_fixed_size<arm_interfaces::srv::GetTargetPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_interfaces::srv::GetTargetPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_interfaces::srv::GetTargetPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetTargetPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetTargetPose_Response & msg,
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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetTargetPose_Response & msg, bool use_flow_style = false)
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
  const arm_interfaces::srv::GetTargetPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::srv::GetTargetPose_Response & msg)
{
  return arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::srv::GetTargetPose_Response>()
{
  return "arm_interfaces::srv::GetTargetPose_Response";
}

template<>
inline const char * name<arm_interfaces::srv::GetTargetPose_Response>()
{
  return "arm_interfaces/srv/GetTargetPose_Response";
}

template<>
struct has_fixed_size<arm_interfaces::srv::GetTargetPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_interfaces::srv::GetTargetPose_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_interfaces::srv::GetTargetPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_interfaces::srv::GetTargetPose>()
{
  return "arm_interfaces::srv::GetTargetPose";
}

template<>
inline const char * name<arm_interfaces::srv::GetTargetPose>()
{
  return "arm_interfaces/srv/GetTargetPose";
}

template<>
struct has_fixed_size<arm_interfaces::srv::GetTargetPose>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_interfaces::srv::GetTargetPose_Request>::value &&
    has_fixed_size<arm_interfaces::srv::GetTargetPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_interfaces::srv::GetTargetPose>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_interfaces::srv::GetTargetPose_Request>::value &&
    has_bounded_size<arm_interfaces::srv::GetTargetPose_Response>::value
  >
{
};

template<>
struct is_service<arm_interfaces::srv::GetTargetPose>
  : std::true_type
{
};

template<>
struct is_service_request<arm_interfaces::srv::GetTargetPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_interfaces::srv::GetTargetPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__TRAITS_HPP_
