# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "MinSizeRel")
  file(REMOVE_RECURSE
  "CMakeFiles\\appSongApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appSongApp_autogen.dir\\ParseCache.txt"
  "appSongApp_autogen"
  )
endif()
