#include "tic_tac_toe_board.h"

int main() {
	TicTacToeBoard board;
	

	do {
		string start = "y";
		string marker = " ";
		int pos = 0;
		cout << "Start new game? (y/n) ";
		cin >> start;

		if (start == "y" || start == "Y") {
			board.game_over() == false;
		}
		else break;

		while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
			cout << "First player letter? (x/o) ";
			cin >> marker;
		}
		board.start_game(marker);

		while (board.game_over() == false) {
			cout << "Place " << board.get_player() << " where? (1-9) ";
			cin >> pos;
			board.mark_board(pos);
		}

		cout << "\nGame over!\n";

	} while (board.game_over() == true);

	cout << "\nThanks for playing!";

	return 0;
}