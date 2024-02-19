# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_interfaces:msg/Mpu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mpu(type):
    """Metaclass of message 'Mpu'."""

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
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.msg.Mpu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpu

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mpu(metaclass=Metaclass_Mpu):
    """Message class 'Mpu'."""

    __slots__ = [
        '_message',
        '_acx',
        '_acy',
        '_acz',
        '_gx',
        '_gy',
        '_gz',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'acx': 'double',
        'acy': 'double',
        'acz': 'double',
        'gx': 'double',
        'gy': 'double',
        'gz': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.acx = kwargs.get('acx', float())
        self.acy = kwargs.get('acy', float())
        self.acz = kwargs.get('acz', float())
        self.gx = kwargs.get('gx', float())
        self.gy = kwargs.get('gy', float())
        self.gz = kwargs.get('gz', float())

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
        if self.message != other.message:
            return False
        if self.acx != other.acx:
            return False
        if self.acy != other.acy:
            return False
        if self.acz != other.acz:
            return False
        if self.gx != other.gx:
            return False
        if self.gy != other.gy:
            return False
        if self.gz != other.gz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def acx(self):
        """Message field 'acx'."""
        return self._acx

    @acx.setter
    def acx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acx = value

    @builtins.property
    def acy(self):
        """Message field 'acy'."""
        return self._acy

    @acy.setter
    def acy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acy = value

    @builtins.property
    def acz(self):
        """Message field 'acz'."""
        return self._acz

    @acz.setter
    def acz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acz = value

    @builtins.property
    def gx(self):
        """Message field 'gx'."""
        return self._gx

    @gx.setter
    def gx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gx' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gx' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gx = value

    @builtins.property
    def gy(self):
        """Message field 'gy'."""
        return self._gy

    @gy.setter
    def gy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gy = value

    @builtins.property
    def gz(self):
        """Message field 'gz'."""
        return self._gz

    @gz.setter
    def gz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gz = value
