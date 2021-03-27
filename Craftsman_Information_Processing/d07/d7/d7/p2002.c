#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p2002() {
	int a = 2, b = 3, c = 4, d, e;
	d = a & b & ~b;
	e = a | b & c;
	printf("%d, %d", d, e);



	return 0;
}