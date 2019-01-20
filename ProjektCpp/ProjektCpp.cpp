// ProjektCpp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>
#include "Chessboard.h"

enum color { White, Black };

int main()
{
	Chessboard * board = new Chessboard();
	std::ifstream board1("Board.txt");
	board->initialize(board1);
}