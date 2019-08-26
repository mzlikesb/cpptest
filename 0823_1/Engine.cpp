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
	map = new Map();
	goal = new Goal();
	MonsterNumber = 1;
	monsters.push_back(new Monster());
	monsters[0]->Init(map, goal, player);
	gameMode = new GameMode();
}

Engine::~Engine()
{
	std::cout << "Engine Destructor" << std::endl;
	
	delete player;
	player = nullptr;

	// 메모리 release
	for (auto monster : monsters)
	{
		delete monster;
		monster = nullptr;
	}	
	// 벡터 삭제
	monsters.erase(monsters.begin(), monsters.end());

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
	for (auto monster : monsters)
	{
		monster->Move(map);
	}	
	EGameOverType result = gameMode->CheckRule(player, monsters, goal);

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
			for (auto monster : monsters)
			{
				monster->Init(map, goal, player);
			}
			monsters.push_back(new Monster());
			monsters[MonsterNumber]->Init(map, goal, player);
			MonsterNumber++;
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
	for (auto monster: monsters)
	{
		monster->Render();
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
