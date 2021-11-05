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
	double a[] = {1,2,3};
	double b[] = {4,5,6};
	printf("%.2f\n", skalarprodukt(a,b));

	double u[3]; // festlegen der grösse des statistischen arrays
	double v[3]; // -- '' -- 
	printf("Einscannen des Vektors 'u'\n");
	for (int i=0;i<3;i++) {
		scanf("%lf", &u[i]);
	}
	printf("Einscannen des Vektors 'v\n");
	for (int j=0;j<3; j++) {
		scanf("%lf", &v[j]);
	}
	// Ausgabe der eingescannten double werte
	// nur für proof of correctnes
	for (int i=0; i < 3; i++) {
		printf("%lf\n", u[i]);
	}
	for (int i=0; i < 3; i++) {
		printf("%lf\n", v[i]);
	}
	printf("%.2f\n", skalarprodukt(u,v));
}