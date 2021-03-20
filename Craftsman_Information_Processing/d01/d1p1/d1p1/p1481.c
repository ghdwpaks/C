#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1481() {
	int jum = 95;
	char lev;
	switch (jum / 30)
	{
	case 3:
		lev = 'A';
		break;
	case 2:
		lev = 'B';
		break;
	case 1:
		lev = 'C';
		break;
	default:
		break;
	}
	printf("%cµî±Þ\n", lev);
	return 0;
}