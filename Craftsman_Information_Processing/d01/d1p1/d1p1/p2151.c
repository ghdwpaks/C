#include <stdio.h>

int p2151() {
	int n[] = { 0,0,0,0,3 };
	int i, j;
	for (j = 4; j >= 0; --j)
	{
		for (i = 4; i > j; --i)
		{
			n[j] += n[i];
		}

	}
	for (j = 0; j < 5; ++j)
	{
		printf("%d ", n[i]);
	}
}