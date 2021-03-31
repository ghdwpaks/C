#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1721() {
	int i = 0, hap = 0;
	while (1)
	{
		i++;
		if (i > 10) break;
		if (i % 5 == 0) continue;
		hap += i;
	}
	printf("%d, %d\n", i, hap);


	return 0;
}