#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1461() {
	int i = 0, hap = 0;
	printf("p1461\n");
	while (1) {
		i++;
		if (i > 10)
			break;
		if (i % 5 == 0)
			continue;
			hap += i;
	}
	printf("%d,%d\n", i, hap);

	return 0;
}