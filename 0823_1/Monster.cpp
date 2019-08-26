#include "Monster.h"
#include "Map.h"
#include "GameplayStatics.h"
#include "Actor.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>

Monster::Monster(char shape, vector<Actor*> actors)
{		
	Shape = shape;
	Init(actors);
}

Monster::~Monster()
{
}


void Monster::Init(vector<Actor*> actors)
{
	Map* map = dynamic_cast<Map*>(actors[0]);	
	int initX = rand() % map->sizeX;
	int initY = rand() % map->sizeY;
	bool isOK = false;
	while (!isOK) {
		isOK = true;
		if (map->data[initY][initX] != 0) isOK = false;
		for (auto actor : actors) {
			Character* c = dynamic_cast<Character*>(actor);
			if (c && initX == c->X && initY == c->Y) {
				isOK = false;
			}
		}

		initX = rand() % map->sizeX;
		initY = rand() % map->sizeY;
	}
	srand(time(nullptr));
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
	GameplayStatics::GotoXY(X, Y);
	printf("\033[0;31m");
	printf("%c", Shape);
	printf("\033[0m");
}
