#include "polynomial.h"

Poly* newPoly(int n) {
	int i;
	Poly* a =  NULL;
	assert(n > 0);
	a = malloc(sizeof(Poly));
	a->n = n;
	a->entry = malloc(n*sizeof(double));
	for (i=0;i<n;i++) {
		a->entry[i] = i + 1;
	}
	return a;
}

Poly* delPoly(Poly* a) {
	assert(a != NULL);
	free(a->entry);
	free(a);

	return NULL;
}

int getPolyDegree(Poly* a) {
	assert(a != NULL);
	return a->n;
}

int getPolyCoeffDegree(Poly* a, int i) {
	assert(a != NULL);
	return a->n-i-1;
}

double getPolyCoefficient(Poly* a, int i) {
	assert(a != NULL);
	assert((i >= 0) && (i < a->n));
	return a->entry[i];
}

void setPolyCoefficient(Poly* a, int i, double new_coeff) {
	assert(a != NULL);
  	assert((i >= 0) && (i < a->n));
  	a->entry[i] = new_coeff;
}

double prodPoly(Poly* X, Poly* Y) {
/*
Um ein Polynom mit einem anderen Polynom zu multiplizieren, 
muss man jedes Glied des ersten Polynoms mit jedem Glied 
des anderen multiplizieren und die erhaltenen Produkte addieren.
*/
	double Xi = 0;
	double Yi = 0;
  	double product = 0;

	int n = 0;
	int i = 0;
	int j = 0;

	assert(X != NULL);
	assert(Y != NULL);
	  
	n = getPolyDegree(X);
	assert(n == getPolyDegree(Y));
	  
	for (i=0; i<n;i++) {
		for (j=0;j<n;j++) {
			Xi = getPolyCoefficient(X,i);
			Yi = getPolyCoefficient(Y,j);
			product += pow(Xi*Yi,i+j);
			// product += X->entry[i] * Y->entry[j];
		}
	}
	return product;
}

int main() {

	int n;
	printf("Eingabe Grad n = ");
	scanf("%d", &n);

	Poly* a = NULL;
	a = newPoly(n);

	int i;
	for(i=0;i<n;i++) {
		printf("%.2f\n", a->entry[i]);
	}

	Poly* b = NULL;
	b = newPoly(n);

	for(i=0;i<n;i++) {
		printf("%.2f\n", a->entry[i]);
	}


	printf("Produkt beider %.2f\n", prodPoly(a, b));

	setPolyCoefficient(b,1,-2);
	printf("Neuer Eintrag = %.2f\n",getPolyCoefficient(b,1));
	printf("Produkt beider %.2f\n", prodPoly(a, b));

	a = delPoly(a);
	b = delPoly(b);
}


/*

Testing

Case 1)
Input a = (1^0,2^1) b = (1^1,2^1)
Produkt = 21

Case 2)
Input a = (1,2,3) b =  (1,2,3)
Produkt = 7032

Case 3)
Input a = (1^0,2^1) b = (1^1,-2^1), dafür müssen wir Eintrag ändern
Produkt = 17

*/