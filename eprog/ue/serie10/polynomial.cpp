#include "polynomial.hpp"

// Aufgabe 10.2


Poly::Poly() {
	degree = 0;
	length = 1;
	coeff = (double*) malloc(length*sizeof(double));
	coeff[0] = 1;
}

Poly::Poly(int degree) {
	assert(degree > 0);
	this->degree = degree;
	length = degree + 1;
	coeff = (double*) 0;
}

Poly::Poly(int degree, double init) {
	assert(degree>0);
	this->degree = degree;
	length = degree + 1;
	coeff = (double*) malloc(length*sizeof(double));
	assert(coeff != (double*) 0);
	for (int j=0;j<length;j++) {
		coeff[j] = init;
	}
}

Poly::~Poly() {
	if (length > 0) {
		free(coeff);
	}
}

int Poly::getDegree() {
	return degree;
}

int Poly::getCoeff(int j) {
	assert(j>=0 && j<length);
	assert(coeff != (double*) 0);
	return coeff[j];
}

int Poly::getLength() {
	return length;
}

