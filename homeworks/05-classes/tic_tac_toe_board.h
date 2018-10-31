#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "peg.h"
using std::string; using std::cout; using std::cin; using std::vector; using std::endl; using std::istream;
using std::ostream;



#ifndef TTT_BOARD
#define TTT_BOARD

class TicTacToeBoard {
public:
	TicTacToeBoard() = default;
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	string get_winner();
	void start_game(string next_player);
	int total = 0;
	friend istream& operator>>(istream& in, TicTacToeBoard& d);
	friend ostream& operator<<(ostream& out, const TicTacToeBoard& d);
protected:
	void set_next_player();
	virtual bool check_column_win() const = 0;
	virtual bool check_row_win() const = 0;
	virtual bool check_diagonal_win() const = 0;
	void clear_board();
	bool check_board_full();
	virtual void display_board(ostream& out) const = 0;
	virtual void get_input(istream& in) = 0;
	vector<Peg> pegs;
	string next_player;
	string winner;
	int x_win = 0;
	int o_win = 0;
	int c_win = 0;

};

#endif //TTT_BOARD