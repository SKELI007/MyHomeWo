there is Cmakelists.txt

add_executable (CMakeProject1.2 "main.cpp" "inout.h" "print.cpp" "read.cpp" )
project(CMakeProject1.2)
add_library (inoutlib print.cpp read.cpp )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1.1 PROPERTY CXX_STANDARD 20)
endif()
