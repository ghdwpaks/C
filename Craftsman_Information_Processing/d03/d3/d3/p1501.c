#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1501() {

	int i = 250;
	float a = 125.23f;
	float d = 314.1592e+5;

	char c = 'A';
	char dd[] = "Korea";
	printf("10���� i = %d\t8���� i = %o\n", i, i);
	printf("a = %8.2f, b = %e\n", a, d);

	printf("c���� ���ڷ� %c�̰� �ƽ�Ű�ڵ�� %d�̴�.\n", c, c);
	printf("%-10s, %10s\n\r", dd, dd);

	return 0;
}