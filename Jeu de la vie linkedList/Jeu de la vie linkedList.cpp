// Jeu de la vie linkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Entity.h"
#include "Grass.h"
#include "Sheep.h"
#include "Wolf.h"
#include "game.h"

using namespace std;

int main(int argc, char *argv[])
{
	char board[ROWS][COLS];

	// Creation of the first node
	cout << "Creating linked List" << endl;
	Entity *pEntityManager = new Entity("entity manager");

	// We create other node
	Sheep *putaindeMouton = new Sheep("PutaindeMouton");
	Wolf *putaindeLoup = new Wolf("PutaindeLoup");
	Grass *HerbedeMerde = new Grass("HerbedeMerde");

	// We attach the nodes to the first of the list
	pEntityManager->setManager(true);
	pEntityManager->attach(putaindeMouton);
	pEntityManager->attach(putaindeLoup);
	pEntityManager->attach(HerbedeMerde);

	// Draw node list
	pEntityManager->drawEntity();

	initBoard(board);
	printBoard(board);

	int nbG = 10;
	randomlyPlaceGrass(board, nbG);

	system("PAUSE");
    return 0;
}

