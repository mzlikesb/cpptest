#include "GameplayStatics.h"
#include <Windows.h>

// 커서를 해당 위치로 옮김
void GameplayStatics::GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
