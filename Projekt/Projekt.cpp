/*
******Projekt to solve the knight problem********
*************************************************
Authors:	Philipp Horlaender & Konrad Muench
Course:		Computer Engineering
Semsester:	WiSe 2018/2019
**************************************************
*/

#include <iostream>
#include <fstream>
#include "Chessboard.h"
#include "UI.h"
#include "Graph.h"
#include "Node.h"
#include "Edge.h"

int main()
{
	//main
	UI ui;
	Chessboard board;
	ui.showKnightLogo();
	ui.runMainMenu(board);	
}