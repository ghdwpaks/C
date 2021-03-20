#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1352() {

	int a = 5, b = 10, c = 15, d = 30, result;
	result = a * 3 + b > d || c - b / a <= d && 1;
	printf("%d\n", result);


	return 0;
}

