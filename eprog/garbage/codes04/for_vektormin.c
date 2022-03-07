#include <stdio.h>
#define DIM 5

void scanVector(double input[], int dim) {
  int j = 0;
  for (j=0; j<dim; j++) {
    input[j] = 0;
    printf("%d: ",j);
    scanf("%lf",&input[j]);
  }
}

// The function returns the minimum of a double vector
// of length dim

double min(double input[], int dim) {
  int j = 0;
  // initial guess: the minimum is located at input[0]
  double minval = input[0];
  // iterate over all entries of the vector
  for (j=1; j<dim; j++) {
    // if a smaller value is found, update minimum
    if (input[j] < minval) {
      minval = input[j];
    }
  }
  return minval;
}

main() {
  double x[DIM];
  scanVector(x,DIM);
  printf("The minimum of the vector is %f\n", min(x,DIM));
}
