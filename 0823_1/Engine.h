#pragma once
class Engine
{
public:			
	Engine();
	~Engine();

	void Run();

private:
	bool bIsRunning;
	int KeyCode;
	int MonsterNumber;

	void Input();
	void Tick();
	void Render();

	// Objects
	class Player* player;
	class Monster* monster[10];
	class Map* map;	
	class Goal* goal;

	class GameMode* gameMode;
};

