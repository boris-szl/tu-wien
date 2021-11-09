#include <stdio.h>
#include <math.h>


double pnorm(double x[], int n, double p);

int main() {
	int n;
	double x[n];
	double p;
	// Einlesen der dim von x
	printf("Eingabe der Dimension von x[n}\n");
	scanf("%d", &n);
	// Einlesen des Arrays x[n];
	printf("Eingabe der Werte für x[%d]:\n", n);
	for (int i=0;i<n;i++) {
		scanf("%lf", &x[i]);
	}
	return 0;
}