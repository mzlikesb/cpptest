#include "GameplayStatics.h"
#include <Windows.h>

// Ŀ���� �ش� ��ġ�� �ű�
void GameplayStatics::GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
