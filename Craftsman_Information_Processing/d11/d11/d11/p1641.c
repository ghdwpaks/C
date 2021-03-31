#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1641() {
	int a = 15, b;
	if (a > 10)
	{
		b = a - 10;
	}
	b = b + (10 - b);

	printf("%d\n", b);

	return 0;
}