#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1741() {
	int a;
	printf("정수 입력: ");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 7 == 0) printf("3의 배수이면서 7의 배수임\n");
	else printf("3의 배수이면서 7의 배수가 아님\n");



	return 0;
}