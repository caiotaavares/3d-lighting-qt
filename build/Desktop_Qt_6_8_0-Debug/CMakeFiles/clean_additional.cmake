# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/illumination_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/illumination_autogen.dir/ParseCache.txt"
  "illumination_autogen"
  )
endif()
