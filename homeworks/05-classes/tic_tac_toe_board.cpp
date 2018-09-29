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
	next_player = player;
	clear_board();
}

void TicTacToeBoard::mark_board(int position)
{
	pegs[position] = next_player;
	set_next_player();
}

string TicTacToeBoard::get_player()
{
	if (next_player == "X") {
		next_player = "O";
	}
	else next_player = "X";
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
	if ((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")) {
		return true;
	}
	else if ((pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") || (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")) {
		return true;
	}
	else if ((pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") || (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")) {
		return true;
	}
	else return false;
	
}

bool TicTacToeBoard::check_row_win()
{
	if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")) {
		return true;
	}
	else if ((pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")) {
		return true;
	}
	else if ((pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")) {
		return true;
	}
	else return false;
}

bool TicTacToeBoard::check_diagonal_win()
{
	if ((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")) {
		return true;
	}
	else if ((pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") || (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")) {
		return true;
	}
	else return false;
}

void TicTacToeBoard::clear_board()
{
	for (auto p : pegs) {
		p = " ";
	}
}

bool TicTacToeBoard::check_board_full()
{
	for (auto p : pegs) {
		if (p == " ") {
			return false;
		}
		else return true;
	}
}