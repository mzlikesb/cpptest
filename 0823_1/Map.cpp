#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>
#include <stdlib.h>

Map::Map()
{

}


Map::~Map()
{
}

void Map::Initialize()
{

}

void Map::Render()
{
	system("cls");

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			GameplayStatics::GotoXY(x, y);
			printf("%c", MapTile[data[y][x]]);
		}
		printf("\n");
	}
}
