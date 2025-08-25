# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\wisielec_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\wisielec_autogen.dir\\ParseCache.txt"
  "wisielec_autogen"
  )
endif()
