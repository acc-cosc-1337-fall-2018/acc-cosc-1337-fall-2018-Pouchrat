project(review_library)

add_library(review_library "review.cpp" "review.h")
add_executable(review_exe "main.cpp" "review.cpp")
target_link_libraries(review_exe review_library)