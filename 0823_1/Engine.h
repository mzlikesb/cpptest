#pragma once

#include <vector>

using namespace std;

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
	//class Monster* monster[10];
	// 몬스터가 어딘가에 있고 그거를 가리키는 것이 생성된 것임
	vector<class Monster*> monsters;
	class Map* map;	
	class Goal* goal;

	class GameMode* gameMode;
};

