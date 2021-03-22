#include <stdio.h>

int p2182() {
	int i, a[5], cnt = 0;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (a[i] % 2 != 0) cnt = cnt + 1;
	}
	printf("È¦¼öÀÇ °¹¼ö : %d", cnt);


}