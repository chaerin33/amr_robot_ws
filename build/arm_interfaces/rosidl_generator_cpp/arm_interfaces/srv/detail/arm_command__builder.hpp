// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_interfaces:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__BUILDER_HPP_
#define ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_interfaces/srv/detail/arm_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmCommand_Request_location
{
public:
  explicit Init_ArmCommand_Request_location(::arm_interfaces::srv::ArmCommand_Request & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::srv::ArmCommand_Request location(::arm_interfaces::srv::ArmCommand_Request::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::srv::ArmCommand_Request msg_;
};

class Init_ArmCommand_Request_object_ids
{
public:
  explicit Init_ArmCommand_Request_object_ids(::arm_interfaces::srv::ArmCommand_Request & msg)
  : msg_(msg)
  {}
  Init_ArmCommand_Request_location object_ids(::arm_interfaces::srv::ArmCommand_Request::_object_ids_type arg)
  {
    msg_.object_ids = std::move(arg);
    return Init_ArmCommand_Request_location(msg_);
  }

private:
  ::arm_interfaces::srv::ArmCommand_Request msg_;
};

class Init_ArmCommand_Request_action
{
public:
  Init_ArmCommand_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommand_Request_object_ids action(::arm_interfaces::srv::ArmCommand_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_ArmCommand_Request_object_ids(msg_);
  }

private:
  ::arm_interfaces::srv::ArmCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::srv::ArmCommand_Request>()
{
  return arm_interfaces::srv::builder::Init_ArmCommand_Request_action();
}

}  // namespace arm_interfaces


namespace arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArmCommand_Response_message
{
public:
  explicit Init_ArmCommand_Response_message(::arm_interfaces::srv::ArmCommand_Response & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::srv::ArmCommand_Response message(::arm_interfaces::srv::ArmCommand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::srv::ArmCommand_Response msg_;
};

class Init_ArmCommand_Response_object_ids
{
public:
  explicit Init_ArmCommand_Response_object_ids(::arm_interfaces::srv::ArmCommand_Response & msg)
  : msg_(msg)
  {}
  Init_ArmCommand_Response_message object_ids(::arm_interfaces::srv::ArmCommand_Response::_object_ids_type arg)
  {
    msg_.object_ids = std::move(arg);
    return Init_ArmCommand_Response_message(msg_);
  }

private:
  ::arm_interfaces::srv::ArmCommand_Response msg_;
};

class Init_ArmCommand_Response_slots
{
public:
  explicit Init_ArmCommand_Response_slots(::arm_interfaces::srv::ArmCommand_Response & msg)
  : msg_(msg)
  {}
  Init_ArmCommand_Response_object_ids slots(::arm_interfaces::srv::ArmCommand_Response::_slots_type arg)
  {
    msg_.slots = std::move(arg);
    return Init_ArmCommand_Response_object_ids(msg_);
  }

private:
  ::arm_interfaces::srv::ArmCommand_Response msg_;
};

class Init_ArmCommand_Response_success
{
public:
  Init_ArmCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommand_Response_slots success(::arm_interfaces::srv::ArmCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ArmCommand_Response_slots(msg_);
  }

private:
  ::arm_interfaces::srv::ArmCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::srv::ArmCommand_Response>()
{
  return arm_interfaces::srv::builder::Init_ArmCommand_Response_success();
}

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__BUILDER_HPP_
