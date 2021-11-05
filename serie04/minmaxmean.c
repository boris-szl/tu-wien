#include <stdio.h>
#include <math.h>

// Author: Szelcsanyi Boris
// Date: 11/03/2021
// Last updated: 11/03/2021

void scanVector(int x[], int dim) {
	int i;
	for (i=0;i<dim;i++) {
		scanf("%d", &x[i]);
	}
}

int min(int x[], int dim) {
	int i;
	double minval = x[0];
	for (i=0;i<dim;i++) {
		if (x[i] < minval) {
			minval = x[i];
		}
	}
	return minval;
}

int max(int x[], int dim) {
	int i;
	double maxval = x[0];
	for (i=0;i<dim;i++) {
		if (x[i] > maxval) {
			maxval = x[i];
		}
	}
	return maxval;
}

double arithmeticMean(int x[], int n) {
	int i;
	int sum = 0;
	double mean = 0;
	for (i=0;i<n;i++) {
		sum += x[i];
	}
	return (double) sum/2.;
}	

void minmaxmean(int x[]) {

	// mines vektors
	printf("Minimum: %d\n", min(x,3));
	printf("Maximum: %d\n", max(x,3));
	printf("Mittelwert: %f\n", arithmeticMean(x,3));

}

int main() {
	int x[3]; // vektor x € N^3
	printf("Einlesen des Vektors\n");
	scanVector(x,3);
	minmaxmean(x);

}

// Testing
// x = {1,1,1}
// x = {3,1,1}
// x = {1,2,3}
// x = {100,100,100}
// Mean: 150
// x = {-120, 300, 650}
// Mean: 415
// x = {21432, 21321, 42340}



