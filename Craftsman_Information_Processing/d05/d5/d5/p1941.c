#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int i, int j) {
	return i + j;
}

p1941()
{
	int i = 10, j = 5, result;
	int (*pf)(int, int);
	pf = add;
	result = pf(i, j);
	printf("%d", result);


}