#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int p1741() {
	int a;
	printf("���� �Է�: ");
	scanf("%d", &a);
	if (a % 3 == 0 && a % 7 == 0) printf("3�� ����̸鼭 7�� �����\n");
	else printf("3�� ����̸鼭 7�� ����� �ƴ�\n");



	return 0;
}