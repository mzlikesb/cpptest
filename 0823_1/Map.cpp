#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>
#include <stdlib.h>

Map::Map()
{
	Initialize();
}

Map::~Map()
{
}

void Map::Initialize()
{
	sizeY = 20;
	sizeX = 20;
	for (int y = 0; y < sizeY; y++)
	{
		for (int x = 0; x < sizeX; x++)
		{
			if (y == 0 || y == sizeY - 1 || x == 0 || x == sizeX - 1) data[y][x] = 1;
			else data[y][x] = 0;
		}
	}
}

void Map::Render()
{
	system("cls");

	for (int y = 0; y < sizeY; y++)
	{
		for (int x = 0; x < sizeX; x++)
		{
			GameplayStatics::GotoXY(x, y);
			printf("%c", MapTile[data[y][x]]);
		}
		printf("\n");
	}
}
