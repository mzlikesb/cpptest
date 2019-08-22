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

// 플레이어 캐릭터
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

	//이전 칸 지워야함
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
	// flickering : 화면 주사율만큼 속도가 안나와서 ㅠㅠ
	system("cls"); //  도스 명령어. 화면 지우기
	printf("~~ Procedural Game ~~\n");
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{			
			char tile = MapTile[map[y][x]];
			if(map[y][x]==3) printf("\033[1;31m");
			// 글자 비율때문에 한칸 띔
			printf("%c ", tile);

			if (map[y][x] == 3) printf("\033[0m");
		}
		printf("\n");
	}
}

int main() {
	// 게임 만들기 by 절차적 프로그래밍
	PlayerInit();

	while (bIsRunning) {

		Input();
		Process();
		Render();
	}
	
	//Terminate();
	return 0;
}
