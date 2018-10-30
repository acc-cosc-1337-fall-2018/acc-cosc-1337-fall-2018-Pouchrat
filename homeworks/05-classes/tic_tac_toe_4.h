#include "tic_tac_toe_board.h"

#ifndef TT4
#define TT4

class TicTacToe4 {
public:
	TicTacToe4() = default;
protected:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void display_board(ostream& out);
	void get_input(istream&in);
	vector<Peg> pegs{ 16 };
};

#endif // !TT4
