// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_interfaces:srv/Cargo.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__CARGO__BUILDER_HPP_
#define ARM_INTERFACES__SRV__DETAIL__CARGO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_interfaces/srv/detail/cargo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Cargo_Request_slot
{
public:
  explicit Init_Cargo_Request_slot(::arm_interfaces::srv::Cargo_Request & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::srv::Cargo_Request slot(::arm_interfaces::srv::Cargo_Request::_slot_type arg)
  {
    msg_.slot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::srv::Cargo_Request msg_;
};

class Init_Cargo_Request_object_id
{
public:
  explicit Init_Cargo_Request_object_id(::arm_interfaces::srv::Cargo_Request & msg)
  : msg_(msg)
  {}
  Init_Cargo_Request_slot object_id(::arm_interfaces::srv::Cargo_Request::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_Cargo_Request_slot(msg_);
  }

private:
  ::arm_interfaces::srv::Cargo_Request msg_;
};

class Init_Cargo_Request_action
{
public:
  Init_Cargo_Request_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cargo_Request_object_id action(::arm_interfaces::srv::Cargo_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Cargo_Request_object_id(msg_);
  }

private:
  ::arm_interfaces::srv::Cargo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::srv::Cargo_Request>()
{
  return arm_interfaces::srv::builder::Init_Cargo_Request_action();
}

}  // namespace arm_interfaces


namespace arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_Cargo_Response_message
{
public:
  explicit Init_Cargo_Response_message(::arm_interfaces::srv::Cargo_Response & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::srv::Cargo_Response message(::arm_interfaces::srv::Cargo_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::srv::Cargo_Response msg_;
};

class Init_Cargo_Response_slot
{
public:
  explicit Init_Cargo_Response_slot(::arm_interfaces::srv::Cargo_Response & msg)
  : msg_(msg)
  {}
  Init_Cargo_Response_message slot(::arm_interfaces::srv::Cargo_Response::_slot_type arg)
  {
    msg_.slot = std::move(arg);
    return Init_Cargo_Response_message(msg_);
  }

private:
  ::arm_interfaces::srv::Cargo_Response msg_;
};

class Init_Cargo_Response_success
{
public:
  Init_Cargo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cargo_Response_slot success(::arm_interfaces::srv::Cargo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Cargo_Response_slot(msg_);
  }

private:
  ::arm_interfaces::srv::Cargo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::srv::Cargo_Response>()
{
  return arm_interfaces::srv::builder::Init_Cargo_Response_success();
}

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__SRV__DETAIL__CARGO__BUILDER_HPP_
