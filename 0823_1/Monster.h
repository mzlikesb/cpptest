#pragma once
class Monster
{
public:
	Monster(int startX, int startY);
	~Monster();
	void Move(class Map* map);
	void Render();

	int X;
	int Y;
	char shape;
};

