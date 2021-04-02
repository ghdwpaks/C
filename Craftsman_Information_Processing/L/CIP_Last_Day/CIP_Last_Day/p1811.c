#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1811() {
	int a[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			a[i][j] = (i*3+j+1)+i;
	
	return 0;
}