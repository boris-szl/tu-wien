#include <stdio.h>
#include <math.h>

// Author: Boris Szelcsanyi
// Last Updated:

// Aufgabe 2.4

double gerade(double m, double q);


int main() {
	double m;
	double q;
	while (m && q) {
		printf("Eingabe Parameter m:\n");
		scanf("%lf", &m);
		printf("Eingabe Parameter q:\n");
		scanf("%lf", &q);
	}
	printf("Schnittpunkt (0,%f)\n", gerade(m,q));
}

double gerade(double m, double q) {
	double x, y;
	y = 0;
	// Schnittstelle berechnen
	x = (y-q)/m;
	return x;
}