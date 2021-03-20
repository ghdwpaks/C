#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1561() {
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	char* p;
	p = &a[2];
	printf("%c, %c\n", *p, *(p - 2));

	return 0;
}