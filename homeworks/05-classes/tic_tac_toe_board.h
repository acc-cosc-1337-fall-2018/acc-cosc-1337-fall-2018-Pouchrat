#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using std::string; using std::cout; using std::cin; using std::vector; using std::endl; using std::istream;
using std::ostream;

#ifndef TTT_BOARD
#define TTT_BOARD

class TicTacToeBoard {
public:
	TicTacToeBoard() = default;
	TicTacToeBoard(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	friend istream& operator>>(istream& in, TicTacToeBoard& d);
	friend ostream& operator<<(ostream& out, const TicTacToeBoard& d);
	TicTacToeBoard TicTacToeBoard::operator+=(const TicTacToeBoard& result);
private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "}; //9 pegs, 0-8
	string next_player;
	int x_win = 0;
	int o_win = 0;
	int c_win = 0;

};

#endif //TTT_BOARD