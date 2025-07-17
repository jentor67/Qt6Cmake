# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/twoForms_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/twoForms_autogen.dir/ParseCache.txt"
  "twoForms_autogen"
  )
endif()
