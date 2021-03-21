#include <stdio.h>


func1681(int* p) {
	printf("%d\n", *p);
	printf("%d\n", p[2]);
}

int p1681() {
	int a[7] = { 1,2,3,4,5 };
	func1681(a);
	func1681(a+2);
}




