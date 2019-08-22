#include <stdio.h>


void adder1(int a) {
	a = a + 3;
}

void adder2(int* a) {
	// a = a + 3; -> a���� a�� �ּ� +3�� ���� �����
	*a = *a + 3; // a�� ����Ű�� ������ ���� 3�� ����	
}

void adder3(int& a) {	
	a = a + 3;
}

int main() {
	
	// ���ڿ� : char �迭
	char c[3];
	c[0] = 'A';
	c[1] = 'B';
	c[2] = 0; // ���ڿ� ��

	printf("%s\n", c);
	
	// ���ڿ� �Է� �ޱ�
	char c2[100];	
	scanf("%s", c2); // &c2 ���ص� ��
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