#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1391() {
	int a = 10, b = 20, cha;
	if (a > b) cha = a - b;
	else cha = b - a;
	printf("%d\n", cha);

	return 0;
}