#include "tic_tac_toe_manager.h"

std::unique_ptr<TicTacToeBoard> get_game(GameType game_type) {

	std::unique_ptr<TicTacToeBoard> g;

	if (game_type = tic_tac_toe_3) {
		std::make_unique<Three>();
	}
	else {
		std::make_unique<Four>();
	}

	return g;

}

void save_game(std::unique_ptr<TicTacToeBoard> save) {
	save.push_back(save);
}

void update_winner_count(string& win) {
	TicTacToeBoard tttb;
	string winner = tttb.get_winner();
	if (winner == "X") {
		x_win++;
	}
	else if (winner == "O") {
		o_win++;
	}
	else {
		c_win++;
	}
}

std::ostream operator << (std::ostream& out, TicTacToeManager& m) {

	m.display_board(out);
	cout << "X: " << x_win << "\nO: " << o_win << "\nCat: " << c_win << endl;
	return out;
}