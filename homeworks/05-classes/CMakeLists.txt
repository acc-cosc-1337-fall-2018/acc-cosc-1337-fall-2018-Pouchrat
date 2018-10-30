project(tic_tac_toe_library) 
add_library(tic_tac_toe_library "tic_tac_toe_board.cpp" "tic_tac_toe_board.h" "tic_tac_toe_manager.cpp" "tic_tac_toe_manager.h" 
           "tic_tac_toe_3.cpp" "tic_tac_toe_3.h" "tic_tac_toe_4.cpp" "tic_tac_toe_4.h" ) 
add_executable(tic_tac_toe_exe "main.cpp" "tic_tac_toe_board.cpp" "tic_tac_toe_manager.cpp" "tic_tac_toe_3.cpp" "tic_tac_toe_4.cpp" )