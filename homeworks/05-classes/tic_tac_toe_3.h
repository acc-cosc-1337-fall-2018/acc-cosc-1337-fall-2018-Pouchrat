#include "tic_tac_toe_board.h"

#ifndef TT3
#define TT3

class TicTacToe3 {
public:
	TicTacToe3() = default;
protected:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void display_board(ostream& out);
	void get_input(istream&in);
	vector<Peg> pegs{ 9 };
};

#endif // !TT3
