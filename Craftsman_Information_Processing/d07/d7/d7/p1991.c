#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1991() {
	int a[] = { 86,45,22,38,95 };
	int rank;
	for (int i = 0; i < 5; i++)
	{
		rank = 0;
		for (int j = 0; j < 5; j++)
		{
			if (a[i] < a[j]) rank++;

		}
		printf("%d ", rank);
	}



	return 0;
}