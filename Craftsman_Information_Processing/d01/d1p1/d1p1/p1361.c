#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1361() {
	int a = 10, even = 0, odd = 0;
	for (int i = 1; i <= a; ++i) {
		printf("i = %d", i);
		if (i % 2 == 0) {
			even += i;
			printf("i\n");
		}
		else {
			odd += i;
			printf("e\n");
		}

	}
	printf("%d, %d\n", even, odd);



	return 0;
}