#include <stdio.h>
#include <stdlib.h>

// ���ø�
template<typename T>
void swap(T* pa, T* pb) {
	T temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	/*
	// ������
	int a = 3;
	int b = 4;

	// int* a : int���� �ּҸ� ���� ������ ����
	int* pa = nullptr;
	// pa = 200 : ���� �ȵ� ĳ���� �ʿ�.
	// �ּ�200�� ���� : ������ �Ǵµ� �����ϸ� ����(���Ѿ��� �ּҿ� ����)
	pa = (int*)200; 
	// &a : a�� �ּҰ�
	pa = &a;
	int* pb = &b;
	// *pa : pa�� ����� �ּ� ��ġ�� �ִ� ��
	printf("%d\n", *pa + *pb);
	*/

	float fa = 1.5;
	float fb = 1.4;

	swap(&fa, &fb);
	printf("%f %f\n", fa, fb);

	//������
	int* pa;
	// �����͸� ����Ű�� ������
	int** ppa; 
		

	// �迭
	int array[10];
	// �����Ҵ�
	int n = 10;	
	int* a = (int*)malloc(n * sizeof(int));
	//malloc�� free�� �� ��Ʈ
	free(a);

	*a = 1;
	a[1] = 2;


	return 0;
}
