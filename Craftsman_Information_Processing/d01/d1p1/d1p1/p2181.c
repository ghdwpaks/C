#include <stdio.h>

int p2181() {
	int n[10];
	int min = 9999;
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &n[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (min > n[i]) {
			min = n[i];
		}
	}
	printf("가장 작은 값은 %d이다.", min);

}