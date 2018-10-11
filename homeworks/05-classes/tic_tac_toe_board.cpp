#include "tic_tac_toe_board.h"

bool TicTacToeBoard::game_over()
{
	if (check_column_win() == true || check_row_win() == true
		|| check_diagonal_win() == true) {
		if (next_player == "X") {
			o_win++;
		}
		else {
			x_win++;
		}
		cout << "X score: " << x_win << endl
			<< "O score: " << o_win << endl
			<< "Ties: " << c_win << endl;
		return true;
	}
	else if (check_board_full() == true) {
		c_win++;
		cout << "X score: " << x_win << endl
			<< "O score: " << o_win << endl
			<< "Ties: " << c_win << endl;
		return true;
	}
	return false;
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
}

void TicTacToeBoard::mark_board(int position)
{
	int real_pos = position - 1;
	pegs[real_pos] = next_player;
	set_next_player();
}

string TicTacToeBoard::get_player()
{
	return next_player;
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
	if ((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || 
		(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") ||
		(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")) {
		return true;
	}
	else if	((pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") ||
		(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") ||
		(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")) {
		return true;
	}

	else return false;
	
}

bool TicTacToeBoard::check_row_win()
{
	if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") ||
		(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") ||
		(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")) {
		return true;
	}
	else if	((pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") || 
		(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") || 
		(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")) {
		return true;
	}

	else return false;
}

bool TicTacToeBoard::check_diagonal_win()
{
	if ((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || 
		(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")) {
		return true;
	}
	else if ((pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") ||
		(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")){
		return true;
	}
	return false;
}

void TicTacToeBoard::clear_board()
{
	for (int i = 0; i < 9; i++) {
		pegs[i] = " ";
	}
}

bool TicTacToeBoard::check_board_full()
{
	for (auto p : pegs)
	{
		if (p == " "){

			return false;
		}
	}
	return true;
}

istream& operator>>(istream & in, TicTacToeBoard & d)
{
	int pos = 0;
	cout << "Place " << d.get_player() << " where? (1-9) ";
	in >> pos;
	d.mark_board(pos);
	return in;
}

ostream & operator<<(ostream & out, const TicTacToeBoard & d)
{

	cout << d.pegs[0] << " | " << d.pegs[1] << " | " << d.pegs[2] << endl;
	cout << d.pegs[3] << " | " << d.pegs[4] << " | " << d.pegs[5] << endl;
	cout << d.pegs[6] << " | " << d.pegs[7] << " | " << d.pegs[8] << endl;
	return out;
}

TicTacToeBoard TicTacToeBoard::operator+=(const TicTacToeBoard &result)
{
	x_win += result.x_win;
	o_win += result.o_win;
	c_win += result.c_win;

	return TicTacToeBoard(x_win, o_win, c_win);
}
