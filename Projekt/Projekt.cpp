#include <iostream>
#include <fstream>
#include "Chessboard.h"
#include "UI.h"
#include "Graph.h"
#include "Node.h"
#include "Edge.h"

int main()
{
	UI ui;
	Chessboard board;

	ui.runMainMenu(board);	

	delete &ui, &board;
}