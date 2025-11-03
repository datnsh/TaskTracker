# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TaskTracker_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TaskTracker_autogen.dir\\ParseCache.txt"
  "TaskTracker_autogen"
  )
endif()
