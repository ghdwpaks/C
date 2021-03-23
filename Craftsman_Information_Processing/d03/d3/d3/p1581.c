#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1581() {
	int num1 = 16, num2 = 44;
	int a = num1++;
	int b = --num2;
	printf("%d", a + b);



	return 0;
}