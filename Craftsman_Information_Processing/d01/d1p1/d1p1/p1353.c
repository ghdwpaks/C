#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1353() {
	//j = 8진수, l = 16진수이다.
	int j = 024, k = 24, l = 0x24, hap;
	hap = j + k + l;
	printf("%d, %d, %d, %d\n", j, k, l, hap);



	return 0;
}