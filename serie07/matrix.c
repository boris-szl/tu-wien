#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>


// Author: Boris
// Date created: 21/11/2021	
// Last updated: 23/11/2021


typedef struct _Matrix_ {

	double* A= 0.;
	int m = 0.;
	int n = 0.;

} Matrix;

Matrix* newMatrix(int m, int n);

Matrix* delMatrix(Matrix* A);

void printMatrix(Matrix* A);

int getMatrix(Matrix* A);


double getMatrixEntry(Matrix* A, int j, int k) {
	assert(0<=j<m);
	assert(0<=k<n);

}

void setMatrixEntry(Matrix* A, int j, int k, double x) {
	int j, int k, double x;
	assert((0<=j<m) && (0<=k<n));

}



int main() {



}