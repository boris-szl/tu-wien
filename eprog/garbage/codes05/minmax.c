#include <stdio.h>
#include <assert.h>
#define DIM 5

// The function scanVector reads the coefficients
// of a double vector of length dim from the keyboard
void scanVector(double input[], int dim);

// The function determineMinMax returns the minimum
// and maximum of a double vector of length dim. We
// use Call-by-Reference because of 2 return values.

void determineMinMax(double vector[],int dim,
                     double* min, double* max);

main() {
  double x[DIM];
  double max = 0;
  double min = 0;
  scanVector(x,DIM);
  determineMinMax(x,DIM, &min, &max);
  printf("min(x) = %f\n",min);
  printf("max(x) = %f\n",max);
}

void scanVector(double input[], int dim) {
  assert(dim > 0);
  int j = 0;
  for (j=0; j<dim; ++j) {
    input[j] = 0;
    printf("%d: ",j);
    scanf("%lf",&input[j]);
  }
}

void determineMinMax(double vector[],int dim,
                     double* min, double* max) {
  int j = 0;
  assert(dim > 0);

  // First guess for minimum as well as maximum is the
  // first vector coefficient.
  // Recall that, e.g., max is double* so that *max is
  // a double variable.
  *max = vector[0];
  *min = vector[0];
  
  // iterate through vector and search for smaller resp.
  // larger elements to determine minimum and maximum.
  for (j=1; j<dim; ++j) {
    if (vector[j] < *min) {
      *min = vector[j];
    }
    else if (vector[j] > *max) {
      *max = vector[j];
    }
  }
}

