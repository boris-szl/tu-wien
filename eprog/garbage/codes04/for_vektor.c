#include <stdio.h>

// Read from the keyboard a double vector
// of length dim

void scanVector(double input[], int dim) {
  int j = 0;
  // iterate over all indices of the vector
  for (j=0; j<dim; j++) {
    // initialize j-th coefficient
    input[j] = 0;
    // read j-th coefficient
    printf("%d: ",j);
    scanf("%lf",&input[j]);
  }
}

// Print to the screen a double vector
// of length dim

void printVector(double output[], int dim) {
  int j = 0;
  // iterate over all indices of the vector
  for (j=0; j<dim; j++) {
    // print j-th coefficient
    printf("%f ",output[j]);
  }
  printf("\n");
}

main() {
  double x[5];
  // recall: call by reference for arrays
  scanVector(x,5);
  printVector(x,5);
}
