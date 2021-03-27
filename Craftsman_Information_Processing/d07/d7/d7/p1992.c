#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int p1992() {
	int a, b;
	bool c, d;
	a = 10; b = 0;
	a *= b = 5;
	//printf("a = %d, b = %d\n", a, b);
	c = (a != b);
	d = (a == b);
	printf("%d, %d, %d\n", a, c, d);



	return 0;
}