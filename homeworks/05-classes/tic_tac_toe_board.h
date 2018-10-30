#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using std::string; using std::cout; using std::cin; using std::vector; using std::endl; using std::istream;
using std::ostream;

#ifndef PEGS
#define PEGS

class Peg {
public:
	Peg() = default;
	string val;
};

#endif //PEGS


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
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	void display_board(ostream& out);
	void get_input(istream& in);
	vector<Peg> pegs;
	string next_player;
	string winner;
	int x_win = 0;
	int o_win = 0;
	int c_win = 0;

};

#endif //TTT_BOARD