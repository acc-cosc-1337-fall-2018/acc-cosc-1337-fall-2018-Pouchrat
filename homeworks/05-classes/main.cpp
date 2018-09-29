#include "tic_tac_toe_board.h"

int main() {
	TicTacToeBoard board;
	
	string start;
	string marker;
	int pos;
	do {
		cout << "Start new game? (y/n) ";
		cin >> start;
		if (start == "y" || start == "Y") {
			while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
				cout << "First player letter? (x/o) ";
				cin >> marker;
			}
			board.start_game(marker);
		}
		else break;

		while (board.game_over() == false) {
			cout << "Place " << board.get_player() << " where? (start at 0) ";
			cin >> pos;
			board.mark_board(pos);
		}

	} while (board.game_over() == true);

	cout << "\nThanks for playing!";

	return 0;
}