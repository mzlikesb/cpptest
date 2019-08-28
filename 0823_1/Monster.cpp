#include "Monster.h"
#include "Map.h"
#include "GameplayStatics.h"
#include "Actor.h"
#include <stdlib.h>
#include <time.h>
#include <vector>

Monster::Monster()
{	
	X = 5;
	Y = 5;	
	Shape = 'M';
	srand(time(nullptr));

	ForegroundColor = BLACK;
	BackgroundColor = DARKGRAY;
	
}

Monster::~Monster()
{
	
}

void Monster::Move(int KeyCode, Map * map)
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
	Character::Render();	
}
