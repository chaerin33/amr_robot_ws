// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_interfaces:srv/GetTargetPose.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__BUILDER_HPP_
#define ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_interfaces/srv/detail/get_target_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetTargetPose_Request_target_size
{
public:
  explicit Init_GetTargetPose_Request_target_size(::arm_interfaces::srv::GetTargetPose_Request & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::srv::GetTargetPose_Request target_size(::arm_interfaces::srv::GetTargetPose_Request::_target_size_type arg)
  {
    msg_.target_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Request msg_;
};

class Init_GetTargetPose_Request_target_color
{
public:
  Init_GetTargetPose_Request_target_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTargetPose_Request_target_size target_color(::arm_interfaces::srv::GetTargetPose_Request::_target_color_type arg)
  {
    msg_.target_color = std::move(arg);
    return Init_GetTargetPose_Request_target_size(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::srv::GetTargetPose_Request>()
{
  return arm_interfaces::srv::builder::Init_GetTargetPose_Request_target_color();
}

}  // namespace arm_interfaces


namespace arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetTargetPose_Response_class_name
{
public:
  explicit Init_GetTargetPose_Response_class_name(::arm_interfaces::srv::GetTargetPose_Response & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::srv::GetTargetPose_Response class_name(::arm_interfaces::srv::GetTargetPose_Response::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Response msg_;
};

class Init_GetTargetPose_Response_yaw
{
public:
  explicit Init_GetTargetPose_Response_yaw(::arm_interfaces::srv::GetTargetPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetTargetPose_Response_class_name yaw(::arm_interfaces::srv::GetTargetPose_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GetTargetPose_Response_class_name(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Response msg_;
};

class Init_GetTargetPose_Response_z
{
public:
  explicit Init_GetTargetPose_Response_z(::arm_interfaces::srv::GetTargetPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetTargetPose_Response_yaw z(::arm_interfaces::srv::GetTargetPose_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_GetTargetPose_Response_yaw(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Response msg_;
};

class Init_GetTargetPose_Response_y
{
public:
  explicit Init_GetTargetPose_Response_y(::arm_interfaces::srv::GetTargetPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetTargetPose_Response_z y(::arm_interfaces::srv::GetTargetPose_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GetTargetPose_Response_z(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Response msg_;
};

class Init_GetTargetPose_Response_x
{
public:
  explicit Init_GetTargetPose_Response_x(::arm_interfaces::srv::GetTargetPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetTargetPose_Response_y x(::arm_interfaces::srv::GetTargetPose_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GetTargetPose_Response_y(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Response msg_;
};

class Init_GetTargetPose_Response_success
{
public:
  Init_GetTargetPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTargetPose_Response_x success(::arm_interfaces::srv::GetTargetPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetTargetPose_Response_x(msg_);
  }

private:
  ::arm_interfaces::srv::GetTargetPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::srv::GetTargetPose_Response>()
{
  return arm_interfaces::srv::builder::Init_GetTargetPose_Response_success();
}

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__SRV__DETAIL__GET_TARGET_POSE__BUILDER_HPP_
