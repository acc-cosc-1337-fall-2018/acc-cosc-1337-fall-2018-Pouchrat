cmake_minimum_required (VERSION 3.8)
project(basics_library)

add_library(basics_library "basics.cpp" "basics.h")
add_executable(basics_exe "main.cpp" "basics.cpp")




