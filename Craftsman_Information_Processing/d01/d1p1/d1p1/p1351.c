#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1351() {
	//e-5��, e(�Ҽ���)�� 5�ڸ� �������� �ű�ٴ°Ű���
	float a = 123456789.0e-5f;
	printf("%f\n", a);
	printf("�Ҽ��� A = %6.1f\n������ A = %e\n", a, a);

	return 0;
}