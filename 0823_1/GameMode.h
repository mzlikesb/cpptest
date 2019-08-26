#pragma once
#include <vector>
using namespace std;

enum class EGameOverType {
	Escape = 1,
	Dead = -1,
	Playing = 2
};

class GameMode
{
public:
	GameMode();
	~GameMode();

	EGameOverType CheckRule(class Player* player,
		vector<class Monster*> monsters,
		class Goal* goal);
};

