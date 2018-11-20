cmake_minimum_required (VERSION 3.5.1)
project (my_cmake_project)

set (INC show_args.hpp)
set (LIB_SRC show_args.cpp)
set (SRC main.cpp)

add_library (my_lib.a STATIC ${LIB_SRC})
add_executable (show_args ${INC} ${SRC})
target_link_libraries (show_args my_lib.a)
