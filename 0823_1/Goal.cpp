#include "Goal.h"
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
	printf("%c", Shape);
	printf("\033[0m");
}

void Goal::Init()
{
	X = 18;
	Y = 18;
	Shape = 'G';
}

