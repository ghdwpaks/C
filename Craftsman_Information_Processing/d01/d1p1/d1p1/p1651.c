#include <stdio.h>

int add1651(int i, int j) {
	return i + j;
}

p1651() {
	int i = 10, j = 5, result;
	int (*pf)(int, int);
	pf = add1651;
	result = pf(i, j);
	printf("%d", result);


}


