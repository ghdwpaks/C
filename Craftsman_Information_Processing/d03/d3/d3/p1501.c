#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1501() {

	int i = 250;
	float a = 125.23f;
	float d = 314.1592e+5;

	char c = 'A';
	char dd[] = "Korea";
	printf("10진수 i = %d\t8진수 i = %o\n", i, i);
	printf("a = %8.2f, b = %e\n", a, d);

	printf("c값은 문자로 %c이고 아스키코드로 %d이다.\n", c, c);
	printf("%-10s, %10s\n\r", dd, dd);

	return 0;
}