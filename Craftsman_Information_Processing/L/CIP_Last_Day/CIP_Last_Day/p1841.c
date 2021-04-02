#define _CRT_SECURE_NO_WARNINGS
#define K 5
#include <stdio.h>
int p1841() {
	int n = 0, b[K] = { 1,0,1,1,0 };
	for (int i = 0; i < K; i++)
	{
		int temp = 1;
		for (int j = 0; j < K - 1 - i; j++) temp *= 2;
		n = n + b[i] * temp;
	}
	printf("%d", n);

	return 0;
}