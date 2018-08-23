#include "stdafx.h"
#include "game.h"
#include <Windows.h> 

void initBoard(char board[ROWS][COLS])
{
	for (int y = 0; y < ROWS; y++)
	{
		for (int x = 0; x < COLS; x++)
		{
			board[y][x] = AUCUN;
		}
	}
}

void printBoard(char board[ROWS][COLS])
{
	for (int x = 0; x < COLS; x++)
		cout <<"-"; // une ligne 'souligné' pour dessiner le cadre
	cout << "--" << endl;

	for (int y = 0; y < ROWS; y++) // on affiche la ligne du haut en haut et on descend pour avoir l'afficgage dans le bon sens
	{
		cout << "|";
		for (int x = 0; x < COLS; x++)
		{
			cout << AUCUN;
		}
		cout << "|" << endl;
	}

	cout << "|";
	for (int x = 0; x < COLS; x++)
		cout << "-"; // une ligne 'souligné' pour dessiner le cadre
	cout << "|" << endl;
}


void printGrass()
{
	int symb = 10;
	int fond = 10;

	color(symb, fond);
	cout << " ";
}


void randomlyPlaceGrass(char board[ROWS][COLS], int nb)
{
	int x, y;

	while (nb >= 0)
	{
		x = getRandomNumber(1, COLS);
		y = getRandomNumber(1, ROWS);

		while ((x < 0) || (x >= COLS) || (y < 0) || (y >= ROWS)) //+case pas deja plante
		{
			x = getRandomNumber(0, COLS);
			y = getRandomNumber(0, ROWS);
		}
		gotoxy(x, y);
		printGrass();
		//board[y][x] = GRASS;
		nb--;
	}
}


void randomlyPlaceSheepM(char board[ROWS][COLS], int nbS)
{
	//prendre le nombre de mouton aleatoire et prendre une valeur 
	//aleatoire de ce nombre et placer un nombre de mouton male et femelle
	// exemple on décide de placer 10 moutons; prendre une valeur aléatoire de
	// 10, exemple 3 placer, il faut donc placer 3 male et 7 femelle
	
}

void gotoxy(int x, int y)
{
	COORD c = { x + 1,y + 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int getRandomNumber(int lowest, int highest)
{
	if (lowest == 0)
		return rand() % (highest + 1);

	if (lowest > 0)
		return rand() % (highest + 1) + lowest;
}


/*Choix de la couleur
0: noir
1: bleu foncé
2: vert
3: bleu-gris
4: marron
5: pourpre
6: kaki
7: gris clair
8: gris
9: bleu
10: vert fluo
11: turquoise
12: rouge
13: rose fluo
14: jaune fluo
15: blanc */
void color(int texte, int fond)
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H, fond * 16 + texte);
}