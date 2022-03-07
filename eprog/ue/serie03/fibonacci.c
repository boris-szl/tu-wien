#include <stdio.h>

long int fibonacci(int n);


int main() {

	int n;
	printf("Eingabe einer beliebigen natürlichen Zahl\n");
	scanf("%d", &n);
	printf("%d\n", fibonacci(n));
}

long int fibonacci(int n) {
	if (n == 0) {
		return n;
	} else if (n == 1) {
		return n;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}