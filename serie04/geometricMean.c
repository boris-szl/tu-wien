#include <stdio.h>
#include <math.h>

// Author: Szelcsanyi Boris
// Date: 11/03/2021
// Last updated: 11/03/2021

// netwon method
// bisection method

void scanVector(int n); // deklaration einer void funktion
// liest die vektoren einer n-dimensionalen vektoraums ein...

double geometricMean(double x[], int n) {
	double product;
	for (int i=0;i<n;i++) {
		product += x[i] * x[i+1];
	}
	return pow(product, 1./n);
}

int main() {
	int n;
	printf("Define size of vector:\n");
	scanf("%d", &n);

	// Einlesen der Vektorwerte
	double u[n];
	printf("Einscannen des Vektors 'u'\n");
	for (int i=0; i < n; i++) {
		scanf("%lf", &u[i]);
	}
	for (int i=0;i<n;i++) {
		printf("%.2f\n", u[i]);
	}

	// Ausführen der Funktion
	printf("%f\n", geometricMean(u,n));

}


// Testing
// Input: x[3] = [2,4,2]
// Desired Output = 2.519842

