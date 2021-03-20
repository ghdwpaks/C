#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1351() {
	//e-5가, e(소수점)을 5자리 왼쪽으로 옮긴다는거같음
	float a = 123456789.0e-5f;
	printf("%f\n", a);
	printf("소수점 A = %6.1f\n지수형 A = %e\n", a, a);

	return 0;
}