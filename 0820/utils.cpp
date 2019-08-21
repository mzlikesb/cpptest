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

	// 1. 동작 되는 형태로 작성	
	/*
	int sum = 0;
	// 홀수 일 때
	for (int i = 1; i <= number; i += 2)
	{
		sum += i;
	}
	// 짝수 일 때
	for (int i = 2; i <= number; i += 2)
	{
		sum += i;
	}
	*/

	// 2. 최적화 : 연산을 빠르게/더 짧게 작성
	int StartNumber = number % 2;
	int sum = 0;
	for (int i = StartNumber; i <= number; i += 2)
	{
		sum += i;
	}
	
	return sum;
}