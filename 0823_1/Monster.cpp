#include "Monster.h"
#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Monster::Monster(int startX, int startY)
{
	Init(startX, startY);
}

void Monster::Init(int startX, int startY)
{
	X = startX;
	Y = startY;
	shape = 'M';
	srand(time(nullptr));
}


Monster::~Monster()
{
}

void Monster::Move(Map * map)
{
	int Direction = rand() % 4;

	int newX = X;
	int newY = Y;
	if (Direction == 0) newY++;
	if (Direction == 1) newY--;
	if (Direction == 2) newX++;
	if (Direction == 3) newX--;

	if (map->data[newY][newX] == 0)
	{
		X = newX;
		Y = newY;
	}
}


void Monster::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("\033[0;31m");
	printf("%c", shape);
	printf("\033[0m");
}
