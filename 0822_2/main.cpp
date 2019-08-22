#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define UP		72
#define DOWN	80
#define LEFT	75
#define RIGHT	77

int map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,2,2,0,0,2,2,0,1},
	{1,0,2,2,0,0,2,2,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,2,2,0,0,2,2,0,1},
	{1,0,2,2,0,0,2,2,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};
char MapTile[10] = { ' ', '@','0','p'};

bool bIsRunning = true;

// �÷��̾� ĳ����
int playerX = 0, playerY = 0;
int keycode = 0;

void PlayerInit() {
	playerX = 1;
	playerY = 1;
}

void Input() {	
	keycode = getch();	
}

void PlayerMove() {

	//���� ĭ ��������
	int oldPlayerX = playerX;
	int oldPlayerY = playerY;	

	if (keycode == UP && playerY > 0) playerY--;
	if (keycode == DOWN && playerY < 9) playerY++;
	if (keycode == LEFT && playerX > 0) playerX--;
	if (keycode == RIGHT && playerX < 9) playerX++;

	map[oldPlayerY][oldPlayerX] = 0;
	map[playerY][playerX] = 3;
}

void Process() {
	if (keycode == 'q') bIsRunning = false;		
	PlayerMove();
}

void Render()
{
	// flickering : ȭ�� �ֻ�����ŭ �ӵ��� �ȳ��ͼ� �Ф�
	system("cls"); //  ���� ��ɾ�. ȭ�� �����
	printf("~~ Procedural Game ~~\n");
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{			
			char tile = MapTile[map[y][x]];
			if(map[y][x]==3) printf("\033[1;31m");
			// ���� ���������� ��ĭ ��
			printf("%c ", tile);

			if (map[y][x] == 3) printf("\033[0m");
		}
		printf("\n");
	}
}

int main() {
	// ���� ����� by ������ ���α׷���
	PlayerInit();

	while (bIsRunning) {

		Input();
		Process();
		Render();
	}
	
	//Terminate();
	return 0;
}
