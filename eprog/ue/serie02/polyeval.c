#include <stdio.h>
#include <math.h>

double polyeval(double a, double b, double c, double x);


int main() {
	// Parameter a,b,c und Punkt  elem. reelen Zahlen
	double a,b,c,x;
	do {
		printf("Werte für Parameter a,b,c:\n");
		scanf("%lf %lf %lf", &a, &b, &c);
		printf("Wert für Punkt x:\n");
		scanf("%lf", &x);
	} while (!a && !b && !c && !x);
	printf("p(x) = %f\n", polyeval(a,b,c,x));
}

double polyeval(double a, double b, double c, double x) {
	return pow(a,2)+b*x+c;
} 