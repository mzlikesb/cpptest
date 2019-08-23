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

	void Input();
	void Tick();
	void Render();

	// Objects
	class Player* player;
	class Monster* monster[2];
	class Map* map;	
	class Goal* goal;

	class GameMode* gameMode;
};

