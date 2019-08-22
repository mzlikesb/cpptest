#include <stdio.h>
#include <stdlib.h>

// 템플릿
template<typename T>
void swap(T* pa, T* pb) {
	T temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	/*
	// 포인터
	int a = 3;
	int b = 4;

	// int* a : int변수 주소를 담을 포인터 변수
	int* pa = nullptr;
	// pa = 200 : 저장 안됨 캐스팅 필요.
	// 주소200을 저장 : 저장은 되는데 실행하면 에러(권한없는 주소에 접근)
	pa = (int*)200; 
	// &a : a의 주소값
	pa = &a;
	int* pb = &b;
	// *pa : pa에 담겨진 주소 위치에 있는 값
	printf("%d\n", *pa + *pb);
	*/

	float fa = 1.5;
	float fb = 1.4;

	swap(&fa, &fb);
	printf("%f %f\n", fa, fb);

	//포인터
	int* pa;
	// 포인터를 가리키는 포인터
	int** ppa; 
		

	// 배열
	int array[10];
	// 동적할당
	int n = 10;	
	int* a = (int*)malloc(n * sizeof(int));
	//malloc과 free는 한 세트
	free(a);

	*a = 1;
	a[1] = 2;


	return 0;
}
