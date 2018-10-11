#include "tic_tac_toe_board.h"

int main() {
	//TicTacToeBoard board;
	
	TicTacToeBoard a;
	TicTacToeBoard b;
	TicTacToeBoard c;


	do {
		string start = "y";
		string marker = " ";

		cout << "Start A? (y/n) ";
		cin >> start;

		if (start == "y" || start == "Y") {
			a.game_over() == false;
		}
		else break;

		while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
			cout << "First player letter? (x/o) ";
			cin >> marker;
		}
		a.start_game(marker);

		while (a.game_over() == false) {
			cin >> a;
			cout << a;
		}

		cout << "\nGame over!\n";

	} while (a.game_over() == true);

	do {
		string start = "y";
		string marker = " ";
		cout << "Start B? (y/n) ";
		cin >> start;

		if (start == "y" || start == "Y") {
			b.game_over() == false;
		}
		else break;

		while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
			cout << "First player letter? (x/o) ";
			cin >> marker;
		}
		b.start_game(marker);

		while (b.game_over() == false) {
			cin >> b;
			cout << b;
		}

		cout << "\nGame over!\n";

	} while (b.game_over() == true);

	do {
		string start = "y";
		string marker = " ";
		cout << "Start C? (y/n) ";
		cin >> start;

		if (start == "y" || start == "Y") {
			c.game_over() == false;
		}
		else break;

		while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
			cout << "First player letter? (x/o) ";
			cin >> marker;
		}
		c.start_game(marker);

		while (c.game_over() == false) {
			cin >> c;
			cout << c;
		}

		cout << "\nGame over!\n";

	} while (c.game_over() == true);

	vector<TicTacToeBoard> current_board_in_vector = { a,b,c };
	TicTacToeBoard result;
	for (auto cbv : current_board_in_vector) {
		result += cbv;
	}

	cout << result;

	/*do {
		string start = "y";
		string marker = " ";
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
			cin >> board;
			cout << board;
		}

		cout << "\nGame over!\n";

	} while (board.game_over() == true);

	cout << "\nThanks for playing!";*/

	return 0;
}