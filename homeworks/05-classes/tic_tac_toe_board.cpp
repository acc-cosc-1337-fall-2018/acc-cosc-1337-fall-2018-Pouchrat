#include "tic_tac_toe_board.h"

bool TicTacToeBoard::game_over()
{
	if (check_board_full() == true) return true;
	else if (check_column_win() == true) return true;
	else if (check_row_win() == true) return true;
	else if (check_diagonal_win() == true) return true;
	else return false;
}

void TicTacToeBoard::start_game(string player)
{
	if (player == "X" || player == "x") { //wiggle room
		next_player = "X";
	}
	else if (player == "O" || player == "o") {
		next_player = "O";
	}
	clear_board();
	display_board();
}

void TicTacToeBoard::mark_board(int position)
{
	int real_pos = position - 1;
	pegs[real_pos] = next_player;
	set_next_player();
	cout << endl;
	display_board();
}

string TicTacToeBoard::get_player()
{
	return next_player;
}

void TicTacToeBoard::display_board()
{
	cout << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << endl;
	cout << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << endl;
	cout << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << endl;
}

void TicTacToeBoard::set_next_player()
{
	if (next_player == "X") {
		next_player = "O";
	}
	else {
		next_player = "X";
	}
}

bool TicTacToeBoard::check_column_win()
{
	if ((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") ^ 
		(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")) {
		return true;
	}
	else if ((pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") || 
		(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")) {
		return true;
	}
	else if ((pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") || 
		(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")) {
		return true;
	}
	else return false;
	
}

bool TicTacToeBoard::check_row_win()
{
	if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || 
		(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")) {
		return true;
	}
	else if ((pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || 
		(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")) {
		return true;
	}
	else if ((pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") || 
		(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")) {
		return true;
	}
	else return false;
}

bool TicTacToeBoard::check_diagonal_win()
{
	if ((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || 
		(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")) {
		return true;
	}
	else if ((pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") || 
		(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")) {
		return true;
	}
	else return false;
}

void TicTacToeBoard::clear_board()
{
	for (int i = 0; i < 9; i++) {
		pegs[i] = " ";
	}
}

bool TicTacToeBoard::check_board_full()
{
	int tf = 0; //to count up the filled spaces
	for (auto p : pegs) {
		if (p == "X" || p == "O") {
			tf = tf + 1; //wouldn't let me do ++tf.
		}
		else tf = 0 + tf;
	}
	if (tf < 9) return false;
	else return true;
}
