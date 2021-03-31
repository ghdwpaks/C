#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1701() {
	int i = 0, hap = 0;
	while (i < 10)
	{
		i++;
		hap += i;
	}
	printf("%d, %d\n", i, hap);


	return 0;
}