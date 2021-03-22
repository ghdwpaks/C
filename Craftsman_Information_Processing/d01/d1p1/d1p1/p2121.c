#include <stdio.h>

int p2121() {
	char c[4] = { '+','-', '/', '*' };
	double p;
	switch (c[3])
	{
	case '+' :
		p = 0;
		for (int i = 0; i < 5; i++, p += i);
		break;
	case '-':
		p = 0;
		for (int i = 0; i < 5; i++, p -= i);
		break;
	case '/':
		p = 0;
		for (int i = 0; i < 5; i++, p /= i);
		break;
	default :
		p = 0;
		for (int i = 0; i < 5; i++, p *= i);
	}
	printf("%.3f", p);
}