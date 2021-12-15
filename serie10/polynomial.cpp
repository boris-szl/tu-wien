#include "polynomial.hpp"

// Aufgabe 10.2

// Poly* newPoly(int n) {
// 	int i;
// 	Poly* a =  NULL;
// 	assert(n > 0);
// 	a = malloc(sizeof(Poly));
// 	a->n = n;
// 	a->entry = malloc((n+1)*sizeof(double));
// 	for (i=0;i<n+1;i++) {
// 		a->entry[i] = i + 1;
// 	}
// 	return a;
// }

// Poly* delPoly(Poly* a) {
// 	assert(a != NULL);
// 	free(a->entry);
// 	free(a);

// 	return NULL;
// }

Poly::Poly() {
	int degree = 0;
	coeff = (double*) 0;
}

Poly::Poly(int degree) {
	assert(degree > 0);
	this->degree = degree;
	length = degree + 1;
	coeff = (double*) 0;
}

Poly::Poly(int degree, double init=0) {
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
	return coeff[j+1];
}

int Poly::getLength() {
	return length;
}

// double getPolyCoefficient(Poly* a, int i) {
// 	assert(a != NULL);
// 	assert((i >= 0) && (i <= a->n));
// 	return a->entry[i];
// }

// void setPolyCoefficient(Poly* a, int i, double new_coeff) {
// 	assert(a != NULL);
//   	assert((i >= 0) && (i < a->n));
//   	a->entry[i] = new_coeff;
// }

// double prodPoly(Poly* X, Poly* Y) {
// /*
// Um ein Polynom mit einem anderen Polynom zu multiplizieren, 
// muss man jedes Glied des ersten Polynoms mit jedem Glied 
// des anderen multiplizieren und adie erhaltenen Produkte addieren.
// */
// 	double Xi = 0;
// 	double Yi = 0;
//   	double product = 0;

// 	int n = 0;
// 	int i = 0;
// 	int j = 0;

// 	assert(X != NULL);
// 	assert(Y != NULL);
	  
// 	n = getPolyDegree(X);
// 	assert(n == getPolyDegree(Y));
	  
// 	for (i=0; i<n;i++) {
// 		for (j=0;j<n;j++) {
// 			Xi = getPolyCoefficient(X,i);
// 			Yi = getPolyCoefficient(Y,j);
// 			product += pow(Xi*Yi,i+j);
// 			// product += X->entry[i] * Y->entry[j];
// 		}
// 	}
// 	return product;
// }

// Poly* differentialPolynomial(Poly* a) {
// 	// Ableitung des Polynoms
// 	// Verschiebung nach links
// 	// z.B. (1,2,3) -> (2,6) ??
// 	// z.B. (1,2,3,4) -> (2,6,12) ??
// 	int i;
// 	int n;
// 	int tmp;
// 	n = getPolyDegree(a);
// 	Poly* p_ableitung = NULL;
// 	p_ableitung = malloc(sizeof(Poly));
// 	p_ableitung->n = n;
// 	p_ableitung->entry = malloc(n*sizeof(double));
// 	for(i=0;i<n;i++) {
// 		p_ableitung->entry[i] = (i+1) * a->entry[i+1];
// 	}
// 	return p_ableitung;
// }
