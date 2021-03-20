#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1342() {
	int i = 5, j = 4, k = 1, l, m;
	l = j > 5 || j != 0;
	m = j <= 4 && k < 1;
	printf("%d,%d\n", l, m);



	return 0;
}