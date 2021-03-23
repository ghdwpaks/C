#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1711() {
	int i = 0, hap = 0;
	do {
		i++;
		hap += i;
	} while (i < 10);
	printf("%d, %d\n", i, hap);

	return 0;
}