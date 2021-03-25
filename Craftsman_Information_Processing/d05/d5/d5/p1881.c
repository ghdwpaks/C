#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func1881(int *i, int *j);

int p1881() {
	int a = 3, b = 12;
	func1881(&a, &b);
	printf("%d, %d\n", a, b);
	return 0;
}

void func1881(i, j)
int *i, *j;
{
	*i *= 3;
	*j /= 3;
	printf("%d, %d\n", *i, *j);


}