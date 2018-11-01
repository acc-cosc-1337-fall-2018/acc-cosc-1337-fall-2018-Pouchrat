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
	for (int i = 0; i < 3; i++) {
		if (pegs[i].val == pegs[i + 3].val && pegs[i].val == pegs[i + 6].val && pegs[i].val != " ") {
			return true;
		}
	}

	return false;

}

bool TicTacToe3::check_row_win() const
{
	if (pegs[0].val == pegs[1].val && pegs[0].val == pegs[2].val && pegs[0].val != " ") {
		return true;
	}
	else if (pegs[3].val == pegs[4].val && pegs[3].val == pegs[5].val && pegs[3].val != " ") {
		return true;
	}
	else if (pegs[6].val == pegs[7].val && pegs[6].val == pegs[8].val && pegs[6].val != " ") {
		return true;
	}


	return false;
}

bool TicTacToe3::check_diagonal_win() const
{

	if (pegs[0].val == pegs[4].val && pegs[0].val == pegs[8].val && pegs[0].val != " ") {
		return true;
	}
	else if (pegs[2].val == pegs[4].val && pegs[2].val == pegs[6].val && pegs[2].val != " ") {
		return true;
	}


	return false;
}

void TicTacToe3::display_board(ostream & out) const
{
	for (int i = 0; i < pegs.size() ; i = i + 3) {
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
