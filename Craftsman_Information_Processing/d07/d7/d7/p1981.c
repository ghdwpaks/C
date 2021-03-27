#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1981() {
	int a = 12, b = 8, c = 2, d = 3;
	a /= b++ - c * d;
	printf("%d", a);



	return 0;
}