#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

hrd1951(num) {
	if (num <= 0) return;
	printf("%d ", num);
	hrd1951(num - 1);
}

int p1951()
{
	hrd1951(5);
	return 0;
}