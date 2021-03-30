#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1621() {
	int a = 10, even = 0, odd = 0;
	for (int i = 0; i <= a; i++)
	{
		if (i % 2 == 0) {
			even += i;
		}
		else {
			odd += i;
		}

	}
	printf("%d, %d\n", even, odd);


	return 0;
}