#pragma once
#include "Actor.h"

class Map : public Actor
{
public:
	Map();
	~Map();
	
	virtual void Render() override;
	
	void Initialize();

	int data[20][20];
	char MapTile[10] = { ' ', '@'};
	int sizeX, sizeY;
};

