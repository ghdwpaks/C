#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isprime2032(int number) {
	int i;
	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;

}



int p2032() {

	int number = 99, cnt = 0, i;
	for (i = 2; i <= number; i++)
	{
		cnt = cnt + isprime2032(i);
	}
	printf("%d를 넘지 않는 소수는 %d개입니다.\n", number, cnt);

	return 0;
}