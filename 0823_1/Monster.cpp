#include "Monster.h"
#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Monster::Monster()
{	
}

void Monster::Init(Map * map, Goal * goal, Player * player)
{
	// ¸Ê¿¡¼­ ºó °÷À» Ã£¾Æ¼­ ·£´ý »ý¼º
	int initX = rand() % 10;
	int initY = rand() % 10;	
	while (map->data[initY][initX] != 0) {
		initX = rand() % 10;
		initY = rand() % 10;
	}
	X = initX;
	Y = initY;
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
