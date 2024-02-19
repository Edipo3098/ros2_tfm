cmake_minimum_required(VERSION 3.5)
project(mpu_pub)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Mpu.msg"
)

ament_package()
