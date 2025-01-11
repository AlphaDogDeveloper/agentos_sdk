cmake_minimum_required(VERSION 3.0.2)
project(agentos_examples)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  std_srvs
  actionlib
  agent_msgs
  ros_alphadog
)

find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONCPP REQUIRED   ${JSONCPP_LIBRARIES})

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${JSONCPP_INCLUDE_DIRS}
)

add_executable(hold_skill_node cplusplus/hold_skill.cpp)
target_link_libraries(hold_skill_node ${catkin_LIBRARIES}   ${JSONCPP_LIBRARIES})

add_executable(invoke_skill_node cplusplus/invoke_skill.cpp)
target_link_libraries(invoke_skill_node ${catkin_LIBRARIES}   ${JSONCPP_LIBRARIES})

add_executable(skill_contrl_node cplusplus/skill_contrl.cpp)
target_link_libraries(skill_contrl_node ${catkin_LIBRARIES}   ${JSONCPP_LIBRARIES})

add_executable(skill_status_node cplusplus/skill_status.cpp)
target_link_libraries(skill_status_node ${catkin_LIBRARIES}   ${JSONCPP_LIBRARIES})

catkin_install_python(PROGRAMS
  python/hold_skill.py
  python/invoke_skill.py
  python/skill_contrl.py
  python/skill_status.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(TARGETS hold_skill_node invoke_skill_node skill_contrl_node skill_status_node
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)