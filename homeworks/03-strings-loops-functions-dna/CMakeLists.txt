cmake_minimum_required (VERSION 3.8)
project(dna_library)

add_library(dna_library "dna.cpp" "dna.h")
add_executable(dna_exe "main.cpp" "dna.cpp")




