#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* a, int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main() {
	int n = 10;
	int* c = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		c[i] = i + 1;
	}
	free(c);

	PrintArray(c, n);

	return 0;
}