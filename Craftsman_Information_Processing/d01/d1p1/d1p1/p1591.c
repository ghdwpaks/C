#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
func(i, j);


int p1591() {
	int a = 3, b = 12;
	a = func(a, b);

	printf("%d, %d\n", a, b);
	return 0;
}

func(i, j)
int i, j;
{
	i *= 3;
	j /= 3;
	printf("%d, %d\n", i, j);
	return i;
}


