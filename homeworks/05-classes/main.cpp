#include "tic_tac_toe_board.h"

int main() {
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);
	board.mark_board(1);
	board.mark_board(2);

	return 0;
}