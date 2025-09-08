# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/OpenTextJSONFile_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/OpenTextJSONFile_autogen.dir/ParseCache.txt"
  "OpenTextJSONFile_autogen"
  )
endif()
