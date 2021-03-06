/*
******Projekt to solve the knight problem********
*************************************************
Authors:	Philipp Horlaender & Konrad Muench
Course:		Computer Engineering
Semsester:	WiSe 2018/2019
**************************************************
*/


#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <filesystem>
#include <map>
#include <string>
#include <list>
#include "Chessboard.h"
#include "Graph.h"
#include "Edge.h"
#include "Node.h"

//------------------------------------------
#define TABLE_WIDTH 24
#define TABLE_WIDTH_SMALL 8
//------------------------------------------


class UI
{
private:
	int m_choosenBoard;
public:
	//map with all boards
	std::map<int,std::string>boards;
	
	//user input
	char userInputChar();
	int userInputInt();

	//main menu start
	void showMainMenuHead();
	void showMainMenuOptions();
	void mainMenuChoose(Chessboard&);
	void runMainMenu(Chessboard&);
	
	//load file menu start
	void showLoadFileMenu();
	void showLoadFileMenuOptions();
	void showLoadFileMenuChoose(Chessboard&);
	void runFileMenu(Chessboard&);
	

	//Screens
	void showCredits();
	void failInput();
	void sayGoodBye();
	void showKnightLogo();
	
	//read board files
	void checkIfAllBoardFilesThere();
	void saveAllBoardFiles();
	void showAllSavedBoardFilesScreen();
	void showAllSavedBoardFiles();
	std::ifstream& loadBoardFiles();
	
	//save graph path
	void buildGraph(Chessboard& rBoard, Graph& rGraph);
	void savePathOfGraph(const std::deque<Edge*>& edgeList);
	

	
	


	UI();
	~UI();
};

