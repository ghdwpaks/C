
#include <stdio.h>
int p1721() {
	int i = 0, hap = 0;
<<<<<<< Updated upstream
=======
	
	
>>>>>>> Stashed changes
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

<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
		hap += i;
	}
	printf("%d, %d\n", i, hap);


	return 0;
}