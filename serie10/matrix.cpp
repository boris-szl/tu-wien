#include "matrix.hpp"


Matrix::Matrix() {
	dim = 0;
	coeff = (double*) 0;
}

Matrix::Matrix(int n) {
	assert(n>0);
	dim = n*n;
	coeff = (double*) 0;
}

Matrix::Matrix(int n, double init) {
	assert(n>0);
	this->dim = n*n;
	coeff = (double*) malloc(dim*sizeof(double));
	assert(coeff !=  (double*) 0);
	for (int j=0;j<dim;j++) {
		coeff[j] = init;
	}
}

Matrix::~Matrix() {
	if (dim > 0) {
		free(coeff);
	}
}

int Matrix::size() {
	return dim;
}

void Matrix::set(int k, double value) {
	assert(k>=0 && k<dim);
	coeff[k] = value;
}

double Matrix::get(int k) {
	assert(k>=0 && k<dim);
	return coeff[k];
}

double Matrix::norm() {
	double norm = 0;
	for (int j=0;j<dim;j++) {
		norm = norm + coeff[j]*coeff[j];
	}
	return sqrt(norm);
}