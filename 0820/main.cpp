#include <stdio.h>
#include "utils.h"

int main() {

	int num;
	printf("�ڿ��� : ");
	scanf("%d", &num); // �Է¹����� &�����	
	
	printf("%d\n", sum(num));
	printf("%d", CalculateOddSum(num));

	return 0;
}