#include <stdio.h>


double skalarprodukt(double a[], double b[]) {
	int i,j; // Deklaration dder Indexvariablen j, i
	double result = 0; // auffangbecken für die summe
	for (i=0; i<2+1; i++) {
		result += a[i] * b[i];
	}
	return result;
}

int main() {
	// definieren leeres array
	double a[] = {};
	double b[] = {};
	printf("%.2f\n", skalarprodukt(a,b));

	// size of vektor
	int n;
	printf("Define size of vector:\n");
	scanf("%d", &n);

	double u[n]; // festlegen der grösse des statistischen arrays
	double v[n]; // -- '' -- 
	printf("Einscannen des Vektors 'u'\n");
	for (int i=0; i < n; i++) {
		scanf("%lf", &u[i]);
	}
	printf("Einscannen des Vektors 'v\n");
	for (int j=0;	 j < n; j++) {
		scanf("%lf", &v[j]);
	}
	// Ausgabe der eingescannten double werte
	// nur für proof of correctnes
	for (int i=0; i < n; i++) {
		printf("%f\n", u[i]);
	}
	for (int i=0; i < n; i++) {
		printf("%f\n", v[i]);
	}
	printf("%.2f\n", skalarprodukt(u,v));
}