#include "GameMode.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"

GameMode::GameMode()
{
}


GameMode::~GameMode()
{
}

EGameOverType GameMode::CheckRule(Player * player, vector<class Monster*> monsters, Goal * goal)
{
	for (auto monster : monsters)
	{
		if (player->X == monster->X && player->Y == monster->Y)
			return EGameOverType::Dead;
	}	
	if (player->X == goal->X && player->Y == goal->Y) 
		return EGameOverType::Escape;

	return EGameOverType::Playing;
}
