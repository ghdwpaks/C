#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int p1861() {
	int k, n;
	char st[] = "I am Tom!";
	char temp;
	n = strlen(st);
	n--;
	for (k = 0; k < n; k++)
	{
		temp = *(st + k);
		*(st + k) = *(st + n);
		*(st + n) = temp;
		n--;
	}
	printf("%s\n", st);


	return 0;
}