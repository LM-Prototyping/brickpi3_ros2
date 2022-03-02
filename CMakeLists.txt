cmake_minimum_required(VERSION 3.5)
project(brickpi3_ros2)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(motor_node
  src/motor_node.cpp
  src/BrickPi3/BrickPi3.cpp
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME})

ament_target_dependencies(motor_node rclcpp std_msgs)

install(TARGETS
  motor_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
