#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1341() {
	int hap, j, k, l;
	j = k = l = 0;
	hap = ++j + k++ + ++l;
	printf("%d, %d, %d, %d\n", hap, j, k, l);

	return 0;
}