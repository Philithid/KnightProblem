#include <iostream>
#include <fstream>
#include "Chessboard.h"
#include "UI.h"

int main()
{
	Chessboard * board = new Chessboard();

	std::ifstream board1("./Board1.txt");
	board->initialize(board1);
	std::cout << board->draw().str() << std::endl;
	std::cout << board->findKing().toString() << std::endl;
	std::cout << board->findKnight().toString() << std::endl;
	
	UI ui;

	ui.checkIfAllBoardFilesThere();

	ui.saveAllBoardFiles();

	ui.showAllSavedBoardFiles();
	ui.showLoadFileMenu();
	

	ui.loadBoardFiles();
	
	system("PAUSE");
	
	ui.runMainMenu();	
}