// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_interfaces:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__TRAITS_HPP_
#define ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_interfaces/srv/detail/arm_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: object_ids
  {
    if (msg.object_ids.size() == 0) {
      out << "object_ids: []";
    } else {
      out << "object_ids: [";
      size_t pending_items = msg.object_ids.size();
      for (auto item : msg.object_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmCommand_Request & msg,
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

  // member: object_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_ids.size() == 0) {
      out << "object_ids: []\n";
    } else {
      out << "object_ids:\n";
      for (auto item : msg.object_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmCommand_Request & msg, bool use_flow_style = false)
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
  const arm_interfaces::srv::ArmCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::srv::ArmCommand_Request & msg)
{
  return arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::srv::ArmCommand_Request>()
{
  return "arm_interfaces::srv::ArmCommand_Request";
}

template<>
inline const char * name<arm_interfaces::srv::ArmCommand_Request>()
{
  return "arm_interfaces/srv/ArmCommand_Request";
}

template<>
struct has_fixed_size<arm_interfaces::srv::ArmCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_interfaces::srv::ArmCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_interfaces::srv::ArmCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArmCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: slots
  {
    if (msg.slots.size() == 0) {
      out << "slots: []";
    } else {
      out << "slots: [";
      size_t pending_items = msg.slots.size();
      for (auto item : msg.slots) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_ids
  {
    if (msg.object_ids.size() == 0) {
      out << "object_ids: []";
    } else {
      out << "object_ids: [";
      size_t pending_items = msg.object_ids.size();
      for (auto item : msg.object_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const ArmCommand_Response & msg,
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

  // member: slots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.slots.size() == 0) {
      out << "slots: []\n";
    } else {
      out << "slots:\n";
      for (auto item : msg.slots) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_ids.size() == 0) {
      out << "object_ids: []\n";
    } else {
      out << "object_ids:\n";
      for (auto item : msg.object_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const ArmCommand_Response & msg, bool use_flow_style = false)
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
  const arm_interfaces::srv::ArmCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::srv::ArmCommand_Response & msg)
{
  return arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::srv::ArmCommand_Response>()
{
  return "arm_interfaces::srv::ArmCommand_Response";
}

template<>
inline const char * name<arm_interfaces::srv::ArmCommand_Response>()
{
  return "arm_interfaces/srv/ArmCommand_Response";
}

template<>
struct has_fixed_size<arm_interfaces::srv::ArmCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arm_interfaces::srv::ArmCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arm_interfaces::srv::ArmCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arm_interfaces::srv::ArmCommand>()
{
  return "arm_interfaces::srv::ArmCommand";
}

template<>
inline const char * name<arm_interfaces::srv::ArmCommand>()
{
  return "arm_interfaces/srv/ArmCommand";
}

template<>
struct has_fixed_size<arm_interfaces::srv::ArmCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<arm_interfaces::srv::ArmCommand_Request>::value &&
    has_fixed_size<arm_interfaces::srv::ArmCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<arm_interfaces::srv::ArmCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<arm_interfaces::srv::ArmCommand_Request>::value &&
    has_bounded_size<arm_interfaces::srv::ArmCommand_Response>::value
  >
{
};

template<>
struct is_service<arm_interfaces::srv::ArmCommand>
  : std::true_type
{
};

template<>
struct is_service_request<arm_interfaces::srv::ArmCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arm_interfaces::srv::ArmCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__TRAITS_HPP_
