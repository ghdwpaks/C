#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1501() {
	int a = 20;
	int* b;
	b = &a;
	*b = *b + 10;
	printf("%d %p %d\n", a, b, *b);

	return 0;
}