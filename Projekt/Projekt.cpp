#include <iostream>
#include <fstream>
#include "Chessboard.h"

int main()
{
	Chessboard * board = new Chessboard();

	std::ifstream board1("./Board1.txt");
	board->initialize(board1);
	std::cout << board->draw().str() << std::endl;
}