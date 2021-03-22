#include <stdio.h>

int isprime2191(int number) {
	int i;
	for (i = 0; i < number; i++)
	{
		if (number % i == 0) {
			return 0;
		}
		else {
			return 0;
		}
	}
}

int p2191() {
	int number = 99, cnt = 0, i;
	for (i = 2; i <= number; i++)
	{
		cnt = cnt + isprime2191(i);
	}
	printf("%d를 넘지 않는 소수는 %d개 입니다.", number, cnt);

	return 0;
}
