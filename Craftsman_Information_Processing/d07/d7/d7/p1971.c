#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
func(int* p) {
	printf("%d\n", *p);
	printf("%d\n", p[2]);
}


int p1971() {
	int a[7] = { 1,2,3,4,5 };
	func(a);
	func(a + 1);



	return 0;
}