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

EGameOverType GameMode::CheckRule(Player * player, Monster * monster, Goal * goal)
{
	if (player->X == monster->X && player->Y == monster->Y) 
		return EGameOverType::Dead;

	if (player->X == goal->X && player->Y == goal->Y) 
		return EGameOverType::Escape;

	return EGameOverType::Playing;
}
