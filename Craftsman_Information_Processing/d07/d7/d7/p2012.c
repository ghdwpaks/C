#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p2012() {
	int a, b = 10;
	for (a = 0; a < 5; ++a, b -= a);
	printf("%d, %d", a, b);



	return 0;
}
