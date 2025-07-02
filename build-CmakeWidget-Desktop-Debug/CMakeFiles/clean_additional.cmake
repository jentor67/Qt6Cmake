# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CmakeWidget_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CmakeWidget_autogen.dir/ParseCache.txt"
  "CmakeWidget_autogen"
  )
endif()
