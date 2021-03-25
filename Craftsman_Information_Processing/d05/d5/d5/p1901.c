#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

p1901() {
	printf("%d", factorial(5));
}


factorial(int n)
{
	if (n <= 1) return 1;
	else return n * factorial(n - 1);


}