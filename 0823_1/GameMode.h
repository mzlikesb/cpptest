#pragma once
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
		class Monster* monster,
		class Goal* goal);
};

