
#include <stdio.h>
int p1541() {
	int a[3][4];
	int i, j, k = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			k++;
			a[i][j] = k;
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}