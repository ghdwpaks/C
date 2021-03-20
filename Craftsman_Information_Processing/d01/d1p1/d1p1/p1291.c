#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1291() {
	int a = 5, b = 7, c, d, e, f;
	c = a & b;
	d = a | b;
	e = a ^ d;
	f = ~b;
	a = a >> 1;
	d = d << 3;

	printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);

	return 0;
}