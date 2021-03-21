#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
factorial(int n) {
	if (n <= 1) return 1;
	else return n * factorial(n - 1);
}



p1611() {

	printf("%d", factorial(5));

	return 0;
}