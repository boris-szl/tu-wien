#include <stdio.h>
#include <math.h>

// Author: Szelcsanyi Boris
// Date: 11/03/2021
// Last updated: 11/03/2021


// void scanVector(int x[], int dim) {
// 	int i;
// 	for (i=0;i<dim;i++) {
// 		scanf("%d", &x[i]);
// 	}
// }

double geometricMean(double x[], int n) {
	double product;
	while (++i < n) {
		product *= x[i];
	}
	return pow(product, 1/(double) n);
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
// Überprüfung durch: http://www.alcula.com/calculators/statistics/geometric-mean/
// Input: x[3] = [2,4,2]
// Desired Output = 2.519842

// Input: x[3] = [123, 213, 214]
// Desired Output = ....

