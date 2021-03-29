#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1571() {
	int a = 2, b = 3, c = 4, d;
	d = a * b + c >= 8 && c / a - b != 0;
	printf("%d\n", d);



	return 0;
}