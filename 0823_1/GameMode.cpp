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

EGameOverType GameMode::CheckRule(Player * player, Monster* monster[], int monsterNumber, Goal * goal)
{
	for (int i = 0; i < monsterNumber; i++)
	{
		if (player->X == monster[i]->X && player->Y == monster[i]->Y)
			return EGameOverType::Dead;
	}	
	if (player->X == goal->X && player->Y == goal->Y) 
		return EGameOverType::Escape;

	return EGameOverType::Playing;
}
