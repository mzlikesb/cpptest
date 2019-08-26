#pragma once
class Monster
{
public:
	Monster(int startX, int startY);
	void Init(int startX, int startY);
	~Monster();
	void Move(class Map* map);
	void Render();

	int X;
	int Y;
	char shape;
};

