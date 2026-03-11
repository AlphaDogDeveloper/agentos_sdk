#vDateTime
string(TIMESTAMP vDateTime "%Y-%m-%d %H:%M:%S")

#vProjectDir
execute_process(
  COMMAND basename ${CMAKE_CURRENT_SOURCE_DIR}
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  OUTPUT_VARIABLE vProjectDir
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

#vGitBranch
execute_process(
  COMMAND git rev-parse --abbrev-ref HEAD
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  OUTPUT_VARIABLE vGitBranch
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

#vGitCommit
execute_process(
  COMMAND git describe --dirty --always --tags
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  OUTPUT_VARIABLE vGitCommit
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

set(vFileName "${CMAKE_CURRENT_SOURCE_DIR}/vversion.h")

message(STATUS "-- Building Time: ${vDateTime}")
message(STATUS "-- Git Branch: ${vGitBranch}")
message(STATUS "-- Git Version: ${vGitCommit}")
