#include "tic_tac_toe_board.h"

enum GameType {
	tic_tac_toe_3,
	tic_tac_toe_4
};

class TicTacToeManager: public TicTacToeBoard {
public:
	TicTacToeManager();
	const std::vector<std::unique_ptr<TicTacToeBoard>>& get_games();
	std::unique_ptr<TicTacToeBoard> get_game(GameType game_type);
	void save_game(std::unique_ptr<TicTacToeBoard> save);
	friend std::ostream operator << (std::ostream& out, TicTacToeManager& m);
private:
	void update_winner_count(string& win);
	int x_win = 0;
	int o_win = 0;
	int c_win = 0;
};