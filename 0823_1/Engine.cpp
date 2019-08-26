#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include "Goal.h"
#include "GameMode.h"
#include "GameplayStatics.h"
#include <iostream>
#include <stdio.h>
#include <conio.h>

Engine::Engine()
{	
	std::cout << "Engine Constructor" << std::endl;
	bIsRunning = true;

	player = new Player();
	MonsterNumber = 1;
	monster[0] = new Monster(8, 1);
	monster[1] = new Monster(1, 8);
	map = new Map();
	goal = new Goal();
	gameMode = new GameMode();
}

Engine::~Engine()
{
	std::cout << "Engine Destructor" << std::endl;
	
	delete player;
	player = nullptr;

	delete[] monster;
	for (size_t i = 0; i < MonsterNumber; i++)
	{
		monster[i] = nullptr;
	}	

	delete map;
	map = nullptr;

	delete goal;
	goal = nullptr;

	delete gameMode;
	gameMode = nullptr;
}

void Engine::Input()
{
	KeyCode = getch();
}

void Engine::Tick()
{
	if (KeyCode == 'q') bIsRunning = false;
	else if (KeyCode == 224) return;

	player->Move(KeyCode, map);
	for (int i = 0; i < MonsterNumber; i++)
	{
		monster[i]->Move(map);
	}	
	EGameOverType result = gameMode->CheckRule(player, monster, MonsterNumber, goal);

	switch (result)
	{
		case EGameOverType::Dead:
		{
			bIsRunning = false;
		}
		break;
		case EGameOverType::Escape:
		{			
			player->Init();
			goal->Init();
			MonsterNumber++;

			monster[0]->Init(8, 1);
			monster[1]->Init(1, 8);
			/*for (int i = 0; i < MonsterNumber; i++)
			{
				monster[i]->Init();
			}*/

			//bIsRunning = false;
		}
		break;
		default:
			break;
	}
}

void Engine::Render()
{
	map->Render();
	goal->Render();
	player->Render();
	for (int i = 0; i < MonsterNumber;i++)
	{
		monster[i]->Render();
	}	

	GameplayStatics::GotoXY(0, 10);
}

void Engine::Run()
{
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}
