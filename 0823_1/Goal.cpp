#include "Goal.h"
#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>

Goal::Goal()
{
	Init();
}

Goal::~Goal()
{
}

void Goal::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("\033[0;33m");
	printf("%c", shape);
	printf("\033[0m");
}

void Goal::Init()
{
	X = 8;
	Y = 8;
	shape = 'G';
}

