#include "utils.h"

int sum(int number) {
	int sum = 0;
	for (int i = 0; i <= number; i++)
	{
		sum += i;
	}
	return sum;
}

int CalculateOddSum(int number) {

	// 1. ���� �Ǵ� ���·� �ۼ�	
	/*
	int sum = 0;
	// Ȧ�� �� ��
	for (int i = 1; i <= number; i += 2)
	{
		sum += i;
	}
	// ¦�� �� ��
	for (int i = 2; i <= number; i += 2)
	{
		sum += i;
	}
	*/

	// 2. ����ȭ : ������ ������/�� ª�� �ۼ�
	int StartNumber = number % 2;
	int sum = 0;
	for (int i = StartNumber; i <= number; i += 2)
	{
		sum += i;
	}
	
	return sum;
}