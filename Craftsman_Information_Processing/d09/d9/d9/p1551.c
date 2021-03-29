#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1551() {
	int a = 2, b = 3, c, d, e;
	c = a > 3 && b > 2;
	d = a > 3 || b > 2;
	e = !c;
	printf("%d, %d, %d\n", c, d, e);


	return 0;
}