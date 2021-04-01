#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1851() {
	int* pn, n1 = 200, n2 = 300;
	pn = &n1;
	(*pn) += 40;
	pn = &n2;
	(*pn) -= 50;
	printf("n1=%d\nn2=%d", n1, n2);



	return 0;
}