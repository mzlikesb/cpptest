#include <stdio.h>


void adder1(int a) {
	a = a + 3;
}

void adder2(int* a) {
	// a = a + 3; -> a에는 a의 주소 +3의 값이 저장됨
	*a = *a + 3; // a가 가리키는 변수의 값에 3을 더함	
}

void adder3(int& a) {	
	a = a + 3;
}

int main() {
	
	// 문자열 : char 배열
	char c[3];
	c[0] = 'A';
	c[1] = 'B';
	c[2] = 0; // 문자열 끝

	printf("%s\n", c);
	
	// 문자열 입력 받기
	char c2[100];	
	scanf("%s", c2); // &c2 안해도 됨
	printf("%s", c2);

	/*
	// call by value vs. call by reference
	int a = 3, b = 4, c=5;
	adder1(a);
	adder2(&b);
	adder3(c);

	printf("%d %d %d\n", a, b, c);

	*/
	
	return 0;
}