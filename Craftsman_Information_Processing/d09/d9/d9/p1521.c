#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1521() {
	int a, b, c;
	a = 5 % 3;
	a--;
	b = (a++) + 3;
	printf("%d, %d\n", a, b);
	c = (++a) + 3;

	printf("%d, %d, %d\n", a, b, c);


	return 0;
}