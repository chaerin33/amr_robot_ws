# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arm_interfaces:srv/ArmCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'object_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmCommand_Request(type):
    """Metaclass of message 'ArmCommand_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_interfaces.srv.ArmCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmCommand_Request(metaclass=Metaclass_ArmCommand_Request):
    """Message class 'ArmCommand_Request'."""

    __slots__ = [
        '_action',
        '_object_ids',
        '_location',
    ]

    _fields_and_field_types = {
        'action': 'string',
        'object_ids': 'sequence<int32>',
        'location': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', str())
        self.object_ids = array.array('i', kwargs.get('object_ids', []))
        self.location = kwargs.get('location', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.action != other.action:
            return False
        if self.object_ids != other.object_ids:
            return False
        if self.location != other.location:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value

    @builtins.property
    def object_ids(self):
        """Message field 'object_ids'."""
        return self._object_ids

    @object_ids.setter
    def object_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'object_ids' array.array() must have the type code of 'i'"
            self._object_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'object_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._object_ids = array.array('i', value)

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'location' field must be of type 'str'"
        self._location = value


# Import statements for member types

# Member 'slots'
# Member 'object_ids'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmCommand_Response(type):
    """Metaclass of message 'ArmCommand_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_interfaces.srv.ArmCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmCommand_Response(metaclass=Metaclass_ArmCommand_Response):
    """Message class 'ArmCommand_Response'."""

    __slots__ = [
        '_success',
        '_slots',
        '_object_ids',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'slots': 'sequence<int32>',
        'object_ids': 'sequence<int32>',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.slots = array.array('i', kwargs.get('slots', []))
        self.object_ids = array.array('i', kwargs.get('object_ids', []))
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.slots != other.slots:
            return False
        if self.object_ids != other.object_ids:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def slots(self):
        """Message field 'slots'."""
        return self._slots

    @slots.setter
    def slots(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'slots' array.array() must have the type code of 'i'"
            self._slots = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'slots' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._slots = array.array('i', value)

    @builtins.property
    def object_ids(self):
        """Message field 'object_ids'."""
        return self._object_ids

    @object_ids.setter
    def object_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'object_ids' array.array() must have the type code of 'i'"
            self._object_ids = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'object_ids' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._object_ids = array.array('i', value)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_ArmCommand(type):
    """Metaclass of service 'ArmCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arm_interfaces.srv.ArmCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__arm_command

            from arm_interfaces.srv import _arm_command
            if _arm_command.Metaclass_ArmCommand_Request._TYPE_SUPPORT is None:
                _arm_command.Metaclass_ArmCommand_Request.__import_type_support__()
            if _arm_command.Metaclass_ArmCommand_Response._TYPE_SUPPORT is None:
                _arm_command.Metaclass_ArmCommand_Response.__import_type_support__()


class ArmCommand(metaclass=Metaclass_ArmCommand):
    from arm_interfaces.srv._arm_command import ArmCommand_Request as Request
    from arm_interfaces.srv._arm_command import ArmCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
