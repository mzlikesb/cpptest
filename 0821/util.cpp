#include <stdlib.h>
#include <time.h>

int GetRandomNumber(int MaxNumber, bool* Flag) {
	int RandomNumber;
	srand(time(nullptr));

	// 1 ~ 50 까지의 랜덤숫자
	RandomNumber = rand() % MaxNumber + 1;
	while (Flag[RandomNumber - 1])
	{
		RandomNumber = rand() % MaxNumber + 1;		
	}	
	Flag[RandomNumber - 1] = 1;

	return RandomNumber;
}
