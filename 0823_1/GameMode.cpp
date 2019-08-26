#include "GameMode.h"
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include <vector>

GameMode::GameMode()
{
}


GameMode::~GameMode()
{
}

EGameOverType GameMode::CheckRule(vector<class Actor*> actors)
{
	// c++ 캐스팅
	Goal* goal = dynamic_cast<Goal*>(actors[1]);
	Player* player = dynamic_cast<Player*>(actors[2]); // (Player*)actors[2];
	
	
	if (!player || !goal) return EGameOverType::Playing;

	for (int i=3; i<actors.size();i++)
	{
		Monster* monster = dynamic_cast<Monster*>(actors[i]);
		// monster가 없으면 걍 넘어감
		if (!monster) continue;
		if (player->X == monster->X && player->Y == monster->Y) return EGameOverType::Dead;			
	}	

	if (player->X == goal->X && player->Y == goal->Y) return EGameOverType::Escape;

	return EGameOverType::Playing;
}
