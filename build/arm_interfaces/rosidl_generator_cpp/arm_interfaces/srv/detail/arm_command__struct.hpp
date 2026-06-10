// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_interfaces:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__STRUCT_HPP_
#define ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arm_interfaces__srv__ArmCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__srv__ArmCommand_Request __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmCommand_Request_
{
  using Type = ArmCommand_Request_<ContainerAllocator>;

  explicit ArmCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->location = "";
    }
  }

  explicit ArmCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc),
    location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->location = "";
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type action;
  using _object_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _object_ids_type object_ids;
  using _location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__object_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->object_ids = _arg;
    return *this;
  }
  Type & set__location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__srv__ArmCommand_Request
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__srv__ArmCommand_Request
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCommand_Request_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->object_ids != other.object_ids) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCommand_Request_

// alias to use template instance with default allocator
using ArmCommand_Request =
  arm_interfaces::srv::ArmCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arm_interfaces


#ifndef _WIN32
# define DEPRECATED__arm_interfaces__srv__ArmCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__srv__ArmCommand_Response __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ArmCommand_Response_
{
  using Type = ArmCommand_Response_<ContainerAllocator>;

  explicit ArmCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ArmCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _slots_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _slots_type slots;
  using _object_ids_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _object_ids_type object_ids;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__slots(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->slots = _arg;
    return *this;
  }
  Type & set__object_ids(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->object_ids = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__srv__ArmCommand_Response
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__srv__ArmCommand_Response
    std::shared_ptr<arm_interfaces::srv::ArmCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->slots != other.slots) {
      return false;
    }
    if (this->object_ids != other.object_ids) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmCommand_Response_

// alias to use template instance with default allocator
using ArmCommand_Response =
  arm_interfaces::srv::ArmCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arm_interfaces

namespace arm_interfaces
{

namespace srv
{

struct ArmCommand
{
  using Request = arm_interfaces::srv::ArmCommand_Request;
  using Response = arm_interfaces::srv::ArmCommand_Response;
};

}  // namespace srv

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__SRV__DETAIL__ARM_COMMAND__STRUCT_HPP_
