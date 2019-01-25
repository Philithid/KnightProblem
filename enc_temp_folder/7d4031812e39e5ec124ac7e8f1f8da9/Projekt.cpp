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
	//Chessboard board;
	//ui.runMainMenu(board);
	
	//TEST write file
	
	Node* testOne = new Node("HUMAN");
	Node* testTwo = new Node("ELF");


	Graph knightRider;
	knightRider.addNode(testOne);
	knightRider.addNode(testTwo);
	

	ui.savePathOfGraph(knightRider.getEdges());
	
	
	

	
	delete testOne;
	delete testTwo;
	
}