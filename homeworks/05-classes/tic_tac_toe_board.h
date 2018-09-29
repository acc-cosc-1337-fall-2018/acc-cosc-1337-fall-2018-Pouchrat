#include <string>
#include <iostream>
#include <vector>
using std::string; using std::cout; using std::cin; using std::vector; using std::endl;

#ifndef TTT_BOARD
#define TTT_BOARD

class TicTacToeBoard {
public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	void display_board();
private:
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	vector<string> pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "}; //9 pegs, 0-8
	string next_player;


};

#endif //TTT_BOARD