#include "Player.h"
#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>

#define UP			72
#define Down		80
#define Left		75
#define Right		77

Player::Player()
{
	Init();
}

Player::~Player()
{
}

void Player::Init()
{
	X = 1;
	Y = 1;
	Shape = 'P';
}

void Player::Move(int KeyCode, Map* map)
{
	int NewPlayerX = X;
	int NewPlayerY = Y;
	if (KeyCode == UP) NewPlayerY--;
	if (KeyCode == Down) NewPlayerY++;	
	if (KeyCode == Left) NewPlayerX--;
	if (KeyCode == Right) NewPlayerX++;

	if (map->data[NewPlayerY][NewPlayerX] == 0)
	{
		X = NewPlayerX;
		Y = NewPlayerY;
	}
}

void Player::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("\033[0;32m");
	printf("%c", Shape);
	printf("\033[0m");

}
