#pragma once
#include <vector>
#include "Actor.h"
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

	EGameOverType CheckRule(vector<class Actor*> actors);
};

