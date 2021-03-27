#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1982() {
	int c = 0, d, b[10];
	scanf("%d", &d);
	do {
		b[c] = d % 2;
		c++;
		d /= 2;
	} while (d != 0);
	while (c > 0)
	{
		c--;
		printf("%d", b[c]);
	}



	return 0;
}