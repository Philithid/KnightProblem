// ProjektCpp.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>
#include "Chessboard.h"
#include "UI.h"

enum color { White, Black };
using namespace std;

int main()
{
	
	UI ui;

	ui.checkIfAllBoardFilesThere();

	ui.saveAllBoardFiles();

	ui.showAllSavedBoardFiles();
	ui.showLoadFileMenu();
	

	ui.loadBoardFiles();
	
	system("PAUSE");
	
	ui.runMainMenu();	
}