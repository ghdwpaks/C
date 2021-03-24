#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1851() {
	int* pnum, Num1 = 200, Num2 = 300;
	pnum = &Num1;
	(*pnum) += 40; //n1 240
	pnum = &Num2;
	(*pnum) -= 50; //n2 250
	printf("Num1 = %d\nNum2 = %d", Num1, Num2);


	return 0;
}