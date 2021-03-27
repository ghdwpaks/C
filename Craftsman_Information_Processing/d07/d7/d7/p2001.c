#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p2001() {
	int a, hap = 0;
	for (a = 0; a < 10; ++a, hap += a);
	printf("%d, %d\n", a, hap);


	return 0;
}
