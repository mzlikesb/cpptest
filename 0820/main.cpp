#include <stdio.h>
#include "utils.h"

int main() {

	int num;
	printf("자연수 : ");
	scanf("%d", &num); // 입력받을때 &써야함	
	
	printf("%d\n", sum(num));
	printf("%d", CalculateOddSum(num));

	return 0;
}