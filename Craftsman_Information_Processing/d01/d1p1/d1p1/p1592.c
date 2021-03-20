#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int* i, int* j);

int p1592() {
	
	int a = 3, b = 12;
	func(&a, &b);
	printf("%d, %d\n", a, b);


	return 0;
}

void func(i, j)
int* i, * j;
{

	*i *= 3;
	*j /= 3;
	printf("%d, %d\n", *i, *j);

}

