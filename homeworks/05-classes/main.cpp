#include "tic_tac_toe_board.h"

int main() {
	//TicTacToeBoard board;
	
	TicTacToeBoard t; //tally
	TicTacToeBoard a; //game 1
	TicTacToeBoard b; //game 2
	TicTacToeBoard c; //game 3


	do {
		string marker = " ";

		while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
			cout << "First player letter? (x/o) ";
			cin >> marker;
		}
		a.start_game(marker);

		while (a.game_over() == false) {
			cin >> a;
			cout << a;
		}

		//only gonna output score for "a"
		//i set it to output the score after game over
			//because i got sick of seeing the scores every time the board refreshed
			//even though they weren't gonna change til the game ended
			//so that's what's going on there
		//i put this notice in like 3 different places. just in case.

		cout << "\nGame over!\n";
		t.total += a.total;
		break;
	} while (a.game_over() == true);

	do {
		string marker = " ";

		while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
			cout << "First player letter? (x/o) ";
			cin >> marker;
		}
		b.start_game(marker);

		while (b.game_over() == false) {
			cin >> b;
			cout << b;
		}

		//only gonna output score for "b"

		cout << "\nGame over!\n";
		t.total += b.total;
		break;
	} while (b.game_over() == true);

	do {
		string marker = " ";

		while (marker != "x" && marker != "o" && marker != "X" && marker != "O") {
			cout << "First player letter? (x/o) ";
			cin >> marker;
		}
		c.start_game(marker);

		while (c.game_over() == false) {
			cin >> c;
			cout << c;
		}

		//only gonna output score for "c"

		cout << "\nGame over!\n";
		t.total += c.total;
		break;
	} while (c.game_over() == true);

	//t.total = a.total + b.total + c.total;

	cout << "Games Played: " << t.total;

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