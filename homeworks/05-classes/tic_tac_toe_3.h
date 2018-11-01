#include "tic_tac_toe_board.h"

#ifndef TT3
#define TT3

class TicTacToe3: public TicTacToeBoard {
public:
	TicTacToe3();
protected:
	bool check_column_win() const override;
	bool check_row_win() const override;
	bool check_diagonal_win() const override;
	void display_board(ostream& out) const override;
	void get_input(istream&in) override;
};

#endif // !TT3
