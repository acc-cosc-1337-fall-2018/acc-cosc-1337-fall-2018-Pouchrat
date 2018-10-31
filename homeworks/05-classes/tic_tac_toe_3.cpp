#include "tic_tac_toe_3.h"

TicTacToe3::TicTacToe3(){
	for (int i = 0; i < 9; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}

bool TicTacToe3::check_column_win() const
{
	for (int i = 0; i < pegs.size(); i++) {
		if (pegs[i].val == pegs[i + 3].val && pegs[i + 3].val == pegs[i + 6].val && pegs[i].val != " ") {
			return true;
		}
	}

	return false;

}

bool TicTacToe3::check_row_win() const
{
	for (int i = 0; i < pegs.size(); i++) {
		if (pegs[i].val == pegs[i + 1].val && pegs[i + 1].val == pegs[i + 1].val && pegs[i].val != " ") {
			return true;
		}
	}

	return false;
}

bool TicTacToe3::check_diagonal_win() const
{
	for (int i = 0; i < pegs.size(); i++) {
		if (pegs[i].val == pegs[i + 4].val && pegs[i + 4].val == pegs[i + 8].val && pegs[i].val != " ") {
			return true;
		}
	}

	return false;
}

void TicTacToe3::display_board(ostream & out) const
{
	for (int i = 0; i < pegs.size(); i++) {
		cout << pegs[i].val << " | " << pegs[i + 1].val << " | " << pegs[i + 2].val << endl;
	}
}

void TicTacToe3::get_input(istream & in)
{
	int pos = 0;
	cout << "Place " << get_player() << " where? (1-9) ";
	in >> pos;
	mark_board(pos);
}
