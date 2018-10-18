project(review_library)

add_library(review_library "review.cpp" "review.h")
add_executable(review_exe "main.cpp" "review.cpp")