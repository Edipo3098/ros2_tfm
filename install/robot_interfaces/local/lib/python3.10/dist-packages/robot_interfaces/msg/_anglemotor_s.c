// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_interfaces:msg/Anglemotor.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_interfaces/msg/detail/anglemotor__struct.h"
#include "robot_interfaces/msg/detail/anglemotor__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_interfaces__msg__anglemotor__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_interfaces.msg._anglemotor.Anglemotor", full_classname_dest, 43) == 0);
  }
  robot_interfaces__msg__Anglemotor * ros_message = _ros_message;
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // p0z0
    PyObject * field = PyObject_GetAttrString(_pymsg, "p0z0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p0z0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p0z1
    PyObject * field = PyObject_GetAttrString(_pymsg, "p0z1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p0z1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p0z2
    PyObject * field = PyObject_GetAttrString(_pymsg, "p0z2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p0z2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p1z0
    PyObject * field = PyObject_GetAttrString(_pymsg, "p1z0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p1z0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p1z1
    PyObject * field = PyObject_GetAttrString(_pymsg, "p1z1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p1z1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p1z2
    PyObject * field = PyObject_GetAttrString(_pymsg, "p1z2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p1z2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p2z0
    PyObject * field = PyObject_GetAttrString(_pymsg, "p2z0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p2z0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p2z1
    PyObject * field = PyObject_GetAttrString(_pymsg, "p2z1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p2z1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p2z2
    PyObject * field = PyObject_GetAttrString(_pymsg, "p2z2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p2z2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p3z0
    PyObject * field = PyObject_GetAttrString(_pymsg, "p3z0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p3z0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p3z1
    PyObject * field = PyObject_GetAttrString(_pymsg, "p3z1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p3z1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p3z2
    PyObject * field = PyObject_GetAttrString(_pymsg, "p3z2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p3z2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // armz0
    PyObject * field = PyObject_GetAttrString(_pymsg, "armz0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->armz0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // armz1
    PyObject * field = PyObject_GetAttrString(_pymsg, "armz1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->armz1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // armz2
    PyObject * field = PyObject_GetAttrString(_pymsg, "armz2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->armz2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // armz3
    PyObject * field = PyObject_GetAttrString(_pymsg, "armz3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->armz3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // armz4
    PyObject * field = PyObject_GetAttrString(_pymsg, "armz4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->armz4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gripper
    PyObject * field = PyObject_GetAttrString(_pymsg, "gripper");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gripper = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_interfaces__msg__anglemotor__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Anglemotor */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_interfaces.msg._anglemotor");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Anglemotor");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_interfaces__msg__Anglemotor * ros_message = (robot_interfaces__msg__Anglemotor *)raw_ros_message;
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p0z0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p0z0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p0z0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p0z1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p0z1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p0z1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p0z2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p0z2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p0z2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p1z0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p1z0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p1z0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p1z1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p1z1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p1z1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p1z2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p1z2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p1z2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p2z0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p2z0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p2z0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p2z1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p2z1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p2z1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p2z2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p2z2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p2z2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p3z0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p3z0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p3z0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p3z1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p3z1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p3z1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p3z2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p3z2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p3z2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armz0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->armz0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armz0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armz1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->armz1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armz1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armz2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->armz2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armz2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armz3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->armz3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armz3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // armz4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->armz4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "armz4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gripper
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gripper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gripper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
