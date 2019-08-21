#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define MAXNUMBER 9

int main() {
	/*

	const int Count = 3;
	const int MaxNumber = 3;
	// 1. ��ġ�� �ʴ� ���ڰ� ���� ������ ������ ������	
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

	// 1-2. -> �迭 1�� ���/ �ð�(cpu) ���� ���
	
	srand(time(nullptr));
	int Numbers[Count];
	// ù��° ���� �̱�
	Numbers[0] = rand() % Count + 1;
	for (int i = 1; i < Count; i++)
	{
		// �� ���ڸ� �̾Ƽ� ������ ���� �������� ��:
		// �ִ°Ÿ� �ٽ� �̱� / ������ ����
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


	// 2. ����� ���� �̸� �����ϰ� ����  -> �迭 2�� ���. �ð�(cpu) �� ���
	
	// �ڷ翡 �� ����
	int RandomNumbers[MaxNumber];
	for (int i = 0; i < MaxNumber; i++)
	{
		RandomNumbers[i] = i + 1;
	}

	// �� ���� (ī�弯��)
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

	// �� Ȯ���ϱ�
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