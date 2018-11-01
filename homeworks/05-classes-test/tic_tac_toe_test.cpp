#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Test Game Over 3") {
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test win by first column 3", "[X wins first column]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   First column win are user positions 1,4, and 7
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(4);//X 
	board.mark_board(5);//O 
	board.mark_board(7);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second column 3", "[X wins second column]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Second column win are user positions 2,5, and 8
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(2);//X 
	board.mark_board(3);//O 
	board.mark_board(5);//X
	board.mark_board(6);//O 
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third column 3", "[X wins third column]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   third column win are user positions 3,6, and 9
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(3);//X 
	board.mark_board(4);//O 
	board.mark_board(6);//X 
	board.mark_board(1);//O 
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test start player X 3, next player O") {
	TicTacToe3 board;
	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(5);
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test start player O, next player X 3") {
	TicTacToe3 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
	board.mark_board(5);
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test win by first row 3", "[X wins first row]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   First row win are user positions 1,2, and 3
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(4);//O 
	board.mark_board(2);//X 
	board.mark_board(5);//O 
	board.mark_board(3);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second row 3", "[X wins second row]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Second row win are user positions 4,5 and 6
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(4);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(1);//O 
	board.mark_board(6);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third row 3", "[X wins third row]")
{ /* Tic Tac Toe Board
		012
		345
		678

	   Third row win are user positions 7,8, and 9
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(7);//X 
	board.mark_board(4);//O 
	board.mark_board(8);//X 
	board.mark_board(5);//O 
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonal from top 3", "[X wins diagonal top]")
{ /* Tic Tac Toe Board
		012   123
		345   456
		678   789

	   Diagonal top win are user positions 1,5, and 9
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(3);//O 
	board.mark_board(9);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonal from bottom 3", "[X wins diagonal bottom]")
{ /* Tic Tac Toe Board
		012    123
		345    456
		678    789

	   Diagonal bottom win are user positions 7,5, and 3
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(3);//X 
	board.mark_board(4);//O 
	board.mark_board(5);//X 
	board.mark_board(2);//O 
	board.mark_board(7);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test for no win 3", "[board filled, no winner]")
{ /* Tic Tac Toe Board
		012
		345
		678
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(2);//X 
	board.mark_board(1);//O 
	board.mark_board(4);//X 
	board.mark_board(3);//O 
	board.mark_board(5);//X
	board.mark_board(6);//O
	board.mark_board(7);//X
	board.mark_board(8);//O
	board.mark_board(9);//X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test no-win 3", "[no-win by incomplete]")
{ /* Tic Tac Toe Board
		012
		345
		678
	  */
	TicTacToe3 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(4);//O 
	board.mark_board(7);//X 

	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test Game Over 4") {
	TicTacToe4 board;
	board.start_game("X");
	REQUIRE(board.game_over() == false);
}

TEST_CASE("Test win by first column 4", "[X wins first column]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   First column win are user positions 1,5,9,13
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(5);//X 
	board.mark_board(6);//O 
	board.mark_board(9);//X 
	board.mark_board(12);//O
	board.mark_board(13);//X
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second column 4", "[X wins second column]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   Second column win are user positions 2,6,10,14
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(2);//X 
	board.mark_board(3);//O 
	board.mark_board(6);//X
	board.mark_board(5);//O 
	board.mark_board(10);//X 
	board.mark_board(11);//O
	board.mark_board(14);//X
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third column 4", "[X wins third column]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   third column win are user positions 3,7,11,15
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(3);//X 
	board.mark_board(4);//O 
	board.mark_board(7);//X 
	board.mark_board(1);//O 
	board.mark_board(11);//X 
	board.mark_board(12);//O
	board.mark_board(15);//X
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by fourth column 4", "[X wins third column]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   fourth column win are user positions 4,8,12,16
	  */
	TicTacToe4 board;
	
	board.start_game("X");
	board.mark_board(4);//X 
	board.mark_board(3);//O 
	board.mark_board(8);//X 
	board.mark_board(1);//O 
	board.mark_board(12);//X 
	board.mark_board(11);//O
	board.mark_board(16);//X
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test start player X 4, next player O") {
	TicTacToe4 board;

	board.start_game("X");
	REQUIRE(board.get_player() == "X");
	board.mark_board(5);
	REQUIRE(board.get_player() == "O");
}

TEST_CASE("Test start player O, next player X 4") {
	TicTacToe4 board;
	board.start_game("O");
	REQUIRE(board.get_player() == "O");
	board.mark_board(5);
	REQUIRE(board.get_player() == "X");
}

TEST_CASE("Test win by first row 4", "[X wins first row]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   First row win are user positions 1,2,3,4
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(12);//O 
	board.mark_board(2);//X 
	board.mark_board(5);//O 
	board.mark_board(3);//X 
	board.mark_board(11);//O
	board.mark_board(4);//X
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second row 4", "[X wins second row]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   Second row win are user positions 5,6,7,8
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(5);//X 
	board.mark_board(2);//O 
	board.mark_board(6);//X 
	board.mark_board(1);//O 
	board.mark_board(7);//X 
	board.mark_board(10);//O 
	board.mark_board(8);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third row 4", "[X wins third row]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   Third row win are user positions 9,10,11,12
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(9);//X 
	board.mark_board(4);//O 
	board.mark_board(10);//X 
	board.mark_board(5);//O 
	board.mark_board(11);//X 
	board.mark_board(1);//O 
	board.mark_board(12);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by fourth row 4", "[X wins third row]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   fourth row win are user positions 13,14,15,16
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(13);//X 
	board.mark_board(4);//O 
	board.mark_board(14);//X 
	board.mark_board(5);//O 
	board.mark_board(15);//X 
	board.mark_board(1);//O 
	board.mark_board(16);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonal from top 4", "[X wins diagonal top]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   Diagonal top win are user positions 1,6,11,16
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(6);//X 
	board.mark_board(3);//O 
	board.mark_board(11);//X 
	board.mark_board(4);//O 
	board.mark_board(16);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonal from bottom 4", "[X wins diagonal bottom]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG

	   Diagonal bottom win are user positions 13,10,7,4
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(13);//X 
	board.mark_board(2);//O 
	board.mark_board(10);//X 
	board.mark_board(3);//O 
	board.mark_board(7);//X 
	board.mark_board(1);//O 
	board.mark_board(4);//X 
	//X wins 

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test for no win 4", "[board filled, no winner]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(2);//O 
	board.mark_board(3);//X 
	board.mark_board(4);//O 
	board.mark_board(5);//X
	board.mark_board(6);//O
	board.mark_board(7);//X
	board.mark_board(8);//O
	board.mark_board(10);//X
	board.mark_board(9);//O
	board.mark_board(12);//X
	board.mark_board(11);//O
	board.mark_board(14);//X
	board.mark_board(13);//O
	board.mark_board(16);//X
	board.mark_board(15);//X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test no-win 4", "[no-win by incomplete]")
{ /* Tic Tac Toe Board
		1234
		5678
		9ABC
		DEFG
	  */
	TicTacToe4 board;
	board.start_game("X");
	board.mark_board(1);//X 
	board.mark_board(4);//O 
	board.mark_board(7);//X 
	board.mark_board(3);//O 

	REQUIRE(board.game_over() == false);
}