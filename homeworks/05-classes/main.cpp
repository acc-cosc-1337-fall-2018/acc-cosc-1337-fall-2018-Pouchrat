#include "tic_tac_toe_board.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

int main() {
	
	TicTacToeBoard board;
	TicTacToeManager mgr;
	int gt = 0;

	cout << "Game type?\n (0 = 3, 1 = 4)";
	cin >> gt;

	mgr.get_game(gt);

	do {
		string player1;
		cout << "First player: ";
		cin >> player1;
		board.start_game(player1);
		cin >> mgr;
		cout << mgr;

	} while (board.game_over() != true);

	mgr.save_game(board.game_over());


	return 0;
}
