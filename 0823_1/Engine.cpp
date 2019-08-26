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
	bIsRunning = true;
	gameMode = new GameMode();
}

Engine::~Engine()
{		
	for (auto actor : actors)
	{
		delete actor;
		actor = nullptr;
	}	
	actors.clear();

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

	for (auto actor : actors)
	{
		actor->Tick(KeyCode, (Map*)actors[0]);
	}
	
	EGameOverType result = gameMode->CheckRule(actors);

	switch (result)
	{
		case EGameOverType::Dead:
		{
			bIsRunning = false;
		}
		break;
		case EGameOverType::Escape:
		{	
			for (auto actor : actors) {
				Character* c = dynamic_cast<Character*>(actor);
				if (c) {
					c->Init();
				}
			}
			actors.push_back(new Monster('M', actors));			
		}
		break;
		default:
			break;
	}
}

void Engine::Render()
{
	for (auto actor: actors)
	{
		actor->Render();
	}
	GameplayStatics::GotoXY(0, 20);
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
