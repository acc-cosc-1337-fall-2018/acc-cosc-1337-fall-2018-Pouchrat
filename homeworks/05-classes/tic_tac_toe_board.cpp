#include "tic_tac_toe_board.h"

bool TicTacToeBoard::game_over()
{
	if (check_column_win() == true || check_row_win() == true
		|| check_diagonal_win() == true) {
		if (next_player == "X") {
			o_win++;
			total++;
		}
		else {
			x_win++;
			total++;
		}
		cout << "X score: " << x_win << endl
			<< "O score: " << o_win << endl
			<< "Ties: " << c_win << endl;
		return true;
	}
	else if (check_board_full() == true) {
		c_win++;
		total++;
		cout << "X score: " << x_win << endl
			<< "O score: " << o_win << endl
			<< "Ties: " << c_win << endl;
		return true;
	}
	return false;

	//i set it to output the score after game over
		//because i got sick of seeing the scores every time the board refreshed
		//even though they weren't gonna change til the game ended
		//so that's what's going on there
	//i put this notice in like 3 different places. just in case.
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
	pegs[real_pos].val = next_player;
	set_next_player();
}

string TicTacToeBoard::get_player()
{
	return next_player;
}

string TicTacToeBoard::get_winner()
{
	return string();
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

bool TicTacToeBoard::check_column_win() const
{
	for (int i = 0; i < pegs.size(); i++) {
		if (pegs[i].val == pegs[i + 3].val && pegs[i + 3].val == pegs[i + 6].val && pegs[i].val != " ") {
			return true;
		}
	}

	return false;
	
}

bool TicTacToeBoard::check_row_win() const
{
	for (int i = 0; i < pegs.size(); i++) {
		if (pegs[i].val == pegs[i + 1].val && pegs[i + 1].val == pegs[i + 1].val && pegs[i].val != " ") {
			return true;
		}
	}

	return false;
}

bool TicTacToeBoard::check_diagonal_win() const
{
	for (int i = 0; i < pegs.size(); i++) {
		if (pegs[i].val == pegs[i + 4].val && pegs[i + 4].val == pegs[i + 8].val && pegs[i].val != " ") {
			return true;
		}
	}

	return false;
}

void TicTacToeBoard::clear_board()
{
	for (int i = 0; i < pegs.size(); i++) {
		pegs[i].val = " ";
	}
}

bool TicTacToeBoard::check_board_full()
{
	for (auto p : pegs)
	{
		if (p.val == " "){

			return false;
		}
	}
	return true;
}

istream& operator>>(istream & in, TicTacToeBoard & d)
{
	d.get_input(in);
	return in;
}

ostream & operator<<(ostream & out, const TicTacToeBoard & d)
{
	d.display_board(out);
	return out;
}
