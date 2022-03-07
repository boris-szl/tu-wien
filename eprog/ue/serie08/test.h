#ifndef INCLUDE_STRUCT_TEST__
#define INCLUDE_STRUCT_TEST__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>


typedef struct _Poly_ {
	int n;
	double* entry;

} Poly;

Poly* newPoly(int n);

Poly* delPoly(Poly* a);

int getPolyDegree(Poly* a);

double getPolyCoefficient(Poly* a, int i);

void setPolyCoefficient(Poly* a, int i, double a0);

double prodPoly(Poly* a, Poly* b);

Poly* differentialPolynomial(Poly* a, int k);

void printPoly(Poly* a, int n);



#endif
