#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func1871(int i, int j);

int p1871() {
	int a = 3, b = 12;
	func1871(a, b);
	printf("%d, %d\n", a, b);


	return 0;
}

void func1871(i, j)
int i, j;
{
	j *= 3;
	j /= 3;
	printf("%d, %d\n", i, j);
}