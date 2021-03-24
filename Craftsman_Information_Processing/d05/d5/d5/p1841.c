#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define K 5
int p1841() {
	int n = 0, b[K] = { 1,0,1,1,0 }, i, j, temp;
	for (i = 0; i < K; i++)
	{
		temp = 1;
		//4-i
		for (j = 1; j <= K-1-i; j++)
		{
			temp *= 2;
		}
		printf("%d + %d * %d = %d\n", n, b[i], temp, n + b[i] * temp);
		n = n + b[i] * temp;
	}
	printf("%d", n);
	

	return 0;
}