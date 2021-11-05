#include <stdio.h>
#include <math.h>


int main() {
	double n;
	int exp;
	double result;
	printf("Eingabe einer beliebigen Basis\n");
	scanf("%lf", &n);
	printf("Eingabe eines beliebigen Exponenten\n");
	scanf("%d", &exp);
	result = pow(n, exp);
	printf("%f", result);
}
