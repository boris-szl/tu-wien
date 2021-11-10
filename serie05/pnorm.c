#include <stdio.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 09/11/2021

void scanVector(double x[], int n) {
	for (int i=0;i<n;i++) {
		scanf("%lf", &x[i]);
	}
}

void printAbsoluteVector(double x[], int n) {
	for (int i=0;i<n;i++) {
		printf("%f\n", fabs(x[i]));
	}
}

double pnorm(double x[], int n, double p) {
	double result;
	double pnorm;
	int i;
	for (i=0;i<n;i++) {
		result += pow(fabs(x[i]),p);
	}
	return pow(result, (double) 1/p);
}

int main() {
	int n;
	double x[n];
	double p;
	// Einlesen der dim von x
	printf("Eingabe der Dimension von x[n}\n");
	scanf("%d", &n);
	// Einlesen des Arrays x[n];
	printf("Eingabe der Werte für x[%d]:\n", n);
	scanVector(x,n);
	// Einlese des Exponenten p
	printf("Eingabe des Exponente p\n");
	scanf("%lf", &p);
	// Ausgabe der Vektorwerte |x|
	printAbsoluteVector(x,n);
	// Ausgabe p-Norm
	printf("%f\n", pnorm(x,n,p));
}




// Testing (Wikipedia)
// Sei Vektor x = (3,-2,6)
// p-norm für p=1 (1-Norm) folgt 11
// p-norm für p=2 (2-Norm) folgt 7
// p-norm für p=3 (3-Norm) folgt approx. 6.308 (6.307994)
// p-norm für p=unendlich (Unendlich-Norm) folgt 6. 
	// p -> unendlich konvergiert gegen 6, also dem grössten Wert des Vektors

