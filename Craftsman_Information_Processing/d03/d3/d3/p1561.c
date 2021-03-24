#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1561() {

	int a = 10, b = 20, c, d;
	c = a > b ? a : b;
	d = a > b ? a - b : b - a;

	printf("%d, %d\n", c, d);


	return 0;
}