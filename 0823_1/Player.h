#pragma once


class Player
{
public:
	Player();
	~Player();
	void Init();
	void Move(int KeyCode, class Map* map);
	void Render();
	   
	int X;
	int Y;
	char shape;

};

