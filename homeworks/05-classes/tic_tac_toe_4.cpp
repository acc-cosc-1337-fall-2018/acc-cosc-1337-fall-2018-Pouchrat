#include "tic_tac_toe_4.h"


TicTacToe4::TicTacToe4() {
	for (int i = 0; i < 16; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}
}

bool TicTacToe4::check_column_win() const
{
	for (int i = 0; i < 4; i++) {
		if (pegs[i].val == pegs[i + 4].val 
			&& pegs[i + 4].val == pegs[i + 8].val 
			&& pegs[i + 8].val == pegs[i + 12].val
			&& pegs[i].val != " ") {
			return true;
		}
	}

	return false;

}

bool TicTacToe4::check_row_win() const
{
	for (int i = 0; i < pegs.size(); i = i + 4) {
		if (pegs[i].val == pegs[i + 1].val
			&& pegs[i + 1].val == pegs[i + 2].val
			&& pegs[i + 2].val == pegs[i + 3].val
			&& pegs[i].val != " ") {
			return true;
		}
	}

	return false;
}

bool TicTacToe4::check_diagonal_win() const
{
	if (pegs[0].val == pegs[5].val
		&& pegs[5].val == pegs[10].val
		&& pegs[10].val == pegs[15].val
		&& pegs[0].val != " ") {
		return true;
	}
	else if (pegs[3].val == pegs[6].val
		&& pegs[6].val == pegs[9].val
		&& pegs[9].val == pegs[12].val
		&& pegs[0].val != " ") {
		return true;
	}


	return false;
}

void TicTacToe4::display_board(ostream & out) const
{
	for (int i = 0; i < pegs.size(); i = i + 4) {
		cout << pegs[i].val << " | " << pegs[i + 1].val << " | " << 
			pegs[i + 2].val << " | " << pegs[i + 3].val <<  endl;
	}
}

void TicTacToe4::get_input(istream & in)
{
	int pos = 0;
	cout << "Place " << get_player() << " where? (1-9) ";
	in >> pos;
	mark_board(pos);
}
