#include <stdio.h>

#include <stdio.h>
#include <assert.h>
#define DIM 5

void scanVector(double vector[], int dim);

void determineMinMax(double vector[], int dim,
					double* min, double* max);

int main() {
	double x[DIM];
	double max = 0;
	double min = 0;
	scanVector(x,DIM);
	determineMinMax(x,DIM, &min, &max);
	printf("min(x) = %f\n");
	printf("max{x) = %f\n");
}

