project(tic_tac_toe_library) 
add_library(tic_tac_toe_library "tic_tac_toe_board.cpp" "tic_tac_toe_board.h") 
add_executable(tic_tac_toe_exe "main.cpp" "tic_tac_toe_board.cpp")