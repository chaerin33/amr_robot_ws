#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to arm_interfaces__srv__ArmCommand_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmCommand_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_ids: Vec<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub location: std::string::String,

}



impl Default for ArmCommand_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArmCommand_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ArmCommand_Request {
  type RmwMsg = super::srv::rmw::ArmCommand_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
        object_ids: msg.object_ids.into(),
        location: msg.location.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
        object_ids: msg.object_ids.as_slice().into(),
        location: msg.location.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      action: msg.action.to_string(),
      object_ids: msg.object_ids
          .into_iter()
          .collect(),
      location: msg.location.to_string(),
    }
  }
}


// Corresponds to arm_interfaces__srv__ArmCommand_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmCommand_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slots: Vec<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_ids: Vec<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ArmCommand_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArmCommand_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ArmCommand_Response {
  type RmwMsg = super::srv::rmw::ArmCommand_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        slots: msg.slots.into(),
        object_ids: msg.object_ids.into(),
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        slots: msg.slots.as_slice().into(),
        object_ids: msg.object_ids.as_slice().into(),
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      slots: msg.slots
          .into_iter()
          .collect(),
      object_ids: msg.object_ids
          .into_iter()
          .collect(),
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to arm_interfaces__srv__Cargo_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cargo_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub action: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slot: i32,

}



impl Default for Cargo_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Cargo_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Cargo_Request {
  type RmwMsg = super::srv::rmw::Cargo_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
        object_id: msg.object_id,
        slot: msg.slot,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        action: msg.action.as_str().into(),
      object_id: msg.object_id,
      slot: msg.slot,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      action: msg.action.to_string(),
      object_id: msg.object_id,
      slot: msg.slot,
    }
  }
}


// Corresponds to arm_interfaces__srv__Cargo_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cargo_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slot: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for Cargo_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Cargo_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Cargo_Response {
  type RmwMsg = super::srv::rmw::Cargo_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        slot: msg.slot,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      slot: msg.slot,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      slot: msg.slot,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to arm_interfaces__srv__GetTargetPose_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTargetPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_color: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_size: std::string::String,

}



impl Default for GetTargetPose_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTargetPose_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetTargetPose_Request {
  type RmwMsg = super::srv::rmw::GetTargetPose_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_color: msg.target_color.as_str().into(),
        target_size: msg.target_size.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_color: msg.target_color.as_str().into(),
        target_size: msg.target_size.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_color: msg.target_color.to_string(),
      target_size: msg.target_size.to_string(),
    }
  }
}


// Corresponds to arm_interfaces__srv__GetTargetPose_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetTargetPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub class_name: std::string::String,

}



impl Default for GetTargetPose_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetTargetPose_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetTargetPose_Response {
  type RmwMsg = super::srv::rmw::GetTargetPose_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        yaw: msg.yaw,
        class_name: msg.class_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw: msg.yaw,
        class_name: msg.class_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      yaw: msg.yaw,
      class_name: msg.class_name.to_string(),
    }
  }
}






#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__ArmCommand() -> *const std::ffi::c_void;
}

// Corresponds to arm_interfaces__srv__ArmCommand
#[allow(missing_docs, non_camel_case_types)]
pub struct ArmCommand;

impl rosidl_runtime_rs::Service for ArmCommand {
    type Request = ArmCommand_Request;
    type Response = ArmCommand_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__ArmCommand() }
    }
}




#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__Cargo() -> *const std::ffi::c_void;
}

// Corresponds to arm_interfaces__srv__Cargo
#[allow(missing_docs, non_camel_case_types)]
pub struct Cargo;

impl rosidl_runtime_rs::Service for Cargo {
    type Request = Cargo_Request;
    type Response = Cargo_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__Cargo() }
    }
}




#[link(name = "arm_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__GetTargetPose() -> *const std::ffi::c_void;
}

// Corresponds to arm_interfaces__srv__GetTargetPose
#[allow(missing_docs, non_camel_case_types)]
pub struct GetTargetPose;

impl rosidl_runtime_rs::Service for GetTargetPose {
    type Request = GetTargetPose_Request;
    type Response = GetTargetPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__arm_interfaces__srv__GetTargetPose() }
    }
}


