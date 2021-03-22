#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sub1661(int i, int j) {
	return i - j;
}

int add1661(int i, int j) {
	return i + j;
}

int p1661() {
	int (*pf)(int, int);
	int i = 12, j = 6, result;
	/*
	int i, j, result;
	scanf("%d, %d", &i, &j);
	*/

	pf = add1661;
	result = pf(i, j);
	printf("%d, ", result);

	pf = sub1661;
	result = pf(i, j);
	printf("%d", result);


}


