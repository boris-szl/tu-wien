#include <stdio.h>
#define DIM 5

// read a double vector of length dim from the keyboard
void scanVector(double input[], int dim);

// print a double vector of length dim to the screen
void printVector(double output[], int dim);

// sort a double vector of length dim in ascending order
void minsort(double vector[], int dim);

main() {
  double x[DIM];
  scanVector(x,DIM);
  minsort(x,DIM);
  printVector(x,DIM);
}

void scanVector(double input[], int dim) {
  int j = 0;
  for (j=0; j<dim; j++) {
    input[j] = 0;
    printf("%d: ",j);
    scanf("%lf",&input[j]);
  }
}

void printVector(double output[], int dim) {
  int j = 0;
  for (j=0; j<dim; j++) {
    printf("%f ",output[j]);
  }
  printf("\n");
}

void minsort(double vector[], int dim) {
  int j = 0;
  int k = 0;
  int argmin = 0;
  double tmp = 0;
  
  // iterate over all indices of the vector
  for (j=0; j<dim-1; j++) {
    // determine minimum in (vector[j],...,vector[dim-1])
    // initial guess: minimum is located at vector[j]
    argmin = j;
    for (k=j+1; k<dim; k++) {
      if (vector[argmin] > vector[k]) {
        argmin = k;
      }
    }
    // now vector[argmin] is minimum in the remainder
    // if needed, swap with j so that vector[j] is mininum
    if (argmin > j) {
      tmp = vector[argmin];
      vector[argmin] = vector[j];
      vector[j] = tmp;
    }
  }
}
