
#include <stdio.h>
int p1721() {
	int i = 0, hap = 0;
	while (1)
	{
		printf("i = %d\n", i);
		i++;
		if (i > 10)
		{
			printf("b\n");
			break;
		}
		if (i % 5 == 0) {
			printf("c\n");
			continue;
		}

		hap += i;
	}
	printf("%d, %d\n", i, hap);


	return 0;
}