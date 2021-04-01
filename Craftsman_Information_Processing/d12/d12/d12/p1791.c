#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1791() {
	int a[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		a[i] = i + 10;
	}

	for (i = 0; i < 5; i++) printf("%d ", a[i]);

	return 0;
}