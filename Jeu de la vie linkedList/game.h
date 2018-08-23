#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Sheep.h"
#include "Wolf.h"
#include "Grass.h"

#define ROWS 20
#define COLS 40

#define AUCUN ' '
///MANAGER
void initBoard(char board[ROWS][COLS]);
void printBoard(char board[ROWS][COLS]);

void randomlyPlaceGrass(char board[ROWS][COLS], int nb);

void gotoxy(int x, int y);
int getRandomNumber(int lowest, int highest);
void color(int texte, int fond);
