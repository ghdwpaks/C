#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p2011() {
	char c[4] = { '+', '-', '/', '*' };
	double p;
	switch (c[3])
	{
	case '+':
		p = 0;
		for (int i = 0; i < 5; i++, p += i);
		break;
	case '-':
		p = 0;
		for (int i = 0; i < 5; i++, p -= i);
		break;
	case '/':
		p = 1;
		for (int i = 0; i < 5; i++, p /= i);
		break;
	default :
		p = 1;
		for (int i = 0; i < 5; i++, p *= i);
		break;
	}
	printf("%.3f", p);


	return 0;
}