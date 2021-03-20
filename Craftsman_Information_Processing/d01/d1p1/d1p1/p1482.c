#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1482() {
	int i = 10, hap = 0;
	while (i > 1) {
		i--;
		if (i % 3 == 1) {
			hap += i;
			//printf("%d\n", i);
		}
	}
	printf("%d\n", hap);

	return 0;
}