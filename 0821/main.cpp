#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define MAXNUMBER 9

int main() {
	/*

	const int Count = 3;
	const int MaxNumber = 3;
	// 1. 겹치지 않는 숫자가 나올 때까지 여러번 돌리기	
	int Numbers[Count];
	bool Flag[Count];

	for (int i = 0; i < Count; i++)
	{
		Flag[i] = 0;
	}

	for (int i = 0; i < Count; i++)
	{
		Numbers[i] = GetRandomNumber(MaxNumber, Flag);
	}

	for (int i = 0; i < Count; i++)
	{
		printf("%d\n", Numbers[i]);
	}

	// 1-2. -> 배열 1개 사용/ 시간(cpu) 많이 사용
	
	srand(time(nullptr));
	int Numbers[Count];
	// 첫번째 숫자 뽑기
	Numbers[0] = rand() % Count + 1;
	for (int i = 1; i < Count; i++)
	{
		// 새 숫자를 뽑아서 이전에 뽑은 숫자인지 비교:
		// 있는거면 다시 뽑기 / 없으면 다음
		bool flag = true;
		while (true) {
			int NewNumber = rand() % Count + 1;

			for (int j = 0; j < i; j++)
			{
				if (Numbers[j] == NewNumber) flag = false;
			}

			if (flag) {
				Numbers[i] = NewNumber;
				break;
			}
		}
	}

	for (int i = 0; i < Count; i++)
	{
		printf("%d\n", Numbers[i]);
	}


	// 2. 경우의 수를 미리 생성하고 셔플  -> 배열 2개 사용. 시간(cpu) 덜 사용
	
	// 자루에 공 생성
	int RandomNumbers[MaxNumber];
	for (int i = 0; i < MaxNumber; i++)
	{
		RandomNumbers[i] = i + 1;
	}

	// 공 섞기 (카드섞기)
	srand(time(nullptr));
	int ShuffleCount = 100;
	for (int i = 0; i < ShuffleCount; i++)
	{
		int first = rand() % MaxNumber;
		int second = rand() % MaxNumber;
		int temp = RandomNumbers[first];
		RandomNumbers[first] = RandomNumbers[second];
		RandomNumbers[second] = temp;
	}

	// 공 확인하기
	for (int i = 0; i < MaxNumber; i++)
	{
		printf("%d\n", RandomNumbers[i]);
	}

	*/
	
	int Numbers[MAXNUMBER];
	srand(time(nullptr));
	for (int i = 0; i < MAXNUMBER; i++)
	{
		Numbers[i] = i + 1;
	}

	int ShuffleCount = 100;
	for (int i = 0; i < ShuffleCount; i++)
	{
		int first = rand() % MAXNUMBER;
		int second = rand() % MAXNUMBER;
		int temp = Numbers[first];
		Numbers[first] = Numbers[second];
		Numbers[second] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d\n", Numbers[i]);
	}

	return 0;
}