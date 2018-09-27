cmake_minimum_required(VERSION 3.8)

project("cosc1337")

include_directories(inc)
include_directories(01-basics)
include_directories(homeworks/03-strings-loops-functions-dna)
include_directories(homeworks/04-vectors)

add_subdirectory(01-basics)
add_subdirectory(01-basics_test)
add_subdirectory(homeworks)
add_subdirectory(assignments)



