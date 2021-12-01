#include <stdlib.h>
#include <stdio.h>
#include <math.h>



int main() {
	int n;
	int rem;
	int k;
	printf("Enter a number n:\n");
	scanf("%d", &n);
	k = n / 2;
	printf("%d / 2 = %d\n",n, k);
	rem = n % 2;
	printf("%d\n",rem);

}