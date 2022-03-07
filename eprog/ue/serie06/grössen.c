#include <stdio.h>



int main() {
	int x = 12;
	double y = 12.3;
	char z = 'a' ;

	printf("Size: %lu\n", sizeof(x));
	printf("Size: %lu\n", sizeof(y));
	printf("Size: %lu\n", sizeof(z));
}