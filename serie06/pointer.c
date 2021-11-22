#include <stdio.h>


void test(int* y) {
	*y = 43;
}

int main() {
	int x = 12;
	printf("%d\n", x);
	test(&x);
	printf("%d\n", x);
}