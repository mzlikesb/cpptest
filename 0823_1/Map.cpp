#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>
#include <stdlib.h>

Map::Map()
{
	size = 10;
}

Map::~Map()
{
}

void Map::Render()
{
	MapBase::Render();
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size; x++)
		{
			GameplayStatics::GotoXY(x, y);
			printf("%c", MapTile[data[y][x]]);
		}
	}
}
