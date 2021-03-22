#include <stdio.h>


int p2021() {
	int a = 12, b = 8, c = 2, d = 3;
	a /= b++ - c * d;
	//12 / 8 - 2 * 3
	printf("%d", a);
	return 0;
}