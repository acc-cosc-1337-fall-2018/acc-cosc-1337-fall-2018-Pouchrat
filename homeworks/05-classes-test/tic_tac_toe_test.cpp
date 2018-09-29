#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe_board.h"

TEST_CASE("Test Game Over") {
	TicTacToeBoard board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   First column win are user positions 1,4, and 7
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);//X 
	board.mark_board(7);//O 
	board.mark_board(3);//X 
	board.mark_board(5);//O 
	board.mark_board(6);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second column", "[X wins second column]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Second column win are user positions 1,4, and 7
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X 
	board.mark_board(5);//O 
	board.mark_board(7);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third column", "[X wins third column]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   third column win are user positions 2,5, and 8
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(2);//X 
	board.mark_board(1);//O 
	board.mark_board(5);//X 
	board.mark_board(3);//O 
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test start player X, next player O") {
	TicTacToeBoard board;
	board.start_game("X");
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test start player O, next player X") {
	TicTacToeBoard board;
	board.start_game("O");
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test win by first row", "[X wins first row]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   First row win are user positions 0,1, and 2
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);//X 
	board.mark_board(4);//O 
	board.mark_board(1);//X 
	board.mark_board(5);//O 
	board.mark_board(2);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second row", "[X wins second row]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Second row win are user positions 3,4, and 5
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(3);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X 
	board.mark_board(1);//O 
	board.mark_board(5);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third row", "[X wins third row]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Third row win are user positions 6,7, and 8
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(6);//X 
	board.mark_board(4);//O 
	board.mark_board(7);//X 
	board.mark_board(5);//O 
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonal from top", "[X wins diagonal top]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Diagonal top win are user positions 0,4, and 8
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);//X 
	board.mark_board(4);//O 
	board.mark_board(1);//X 
	board.mark_board(5);//O 
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonal from bottom", "[X wins diagonal bottom]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Diagonal bottom win are user positions 6,4, and 2
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(2);//X 
	board.mark_board(0);//O 
	board.mark_board(4);//X 
	board.mark_board(3);//O 
	board.mark_board(6);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test for no win", "[board filled, no winner]")
{ /* Tic Tac Toe Board
		012
		345
		678
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(0);//O 
	board.mark_board(3);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X
	board.mark_board(5);//O
	board.mark_board(6);//X
	board.mark_board(7);//O
	board.mark_board(8);//X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test no-win", "[no-win by incomplete]")
{ /* Tic Tac Toe Board
		012
		345
		678
	  */
	TicTacToeBoard board;
	board.start_game("X");
	board.mark_board(0);//X 
	board.mark_board(3);//O 
	board.mark_board(6);//X 

	REQUIRE(board.game_over() == false);
	//WHY does it think x's and o's are interchangeable
}