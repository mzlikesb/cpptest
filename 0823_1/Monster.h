#pragma once
class Monster
{
public:
	Monster();
	void Init(class Map* map, class Goal* goal, class Player* player);
	~Monster();
	void Move(class Map* map);
	void Render();

	int X;
	int Y;
	char shape;
};

