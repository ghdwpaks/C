#include <stdio.h>
#include <stdbool.h>

int p2071() {
	int a, b;
	bool c, d;
	a = 10; b = 0;
	a *= b = 5;
	c = (a != b);
	d = (a == b);
	printf("%d, %d, %d\n", a, c, d);



	return 0;
}


