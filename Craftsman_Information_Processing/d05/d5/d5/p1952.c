#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

p1941()
{
	printf("%d", hrdcompare1952(10, 23) + hrdcompare1952(35, 19));
}

int hrdcompare1952(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}
