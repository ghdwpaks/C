#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1691() {
	int i, hap = 0;
	for (i = 1; i <= 10; ++i)
	{
		hap += i;
	}
	printf("%d, %d\n", i, hap);


	return 0;
}