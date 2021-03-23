#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1582() {
	int num1 = 16, num2 = 80;
	printf("%d", num1 > num2 ? num1 & num2 : num1 & num2);



	return 0;
}