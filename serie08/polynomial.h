#ifndef INCLUDE_POLY__
#define INCLUDE_POLY__

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


#endif
