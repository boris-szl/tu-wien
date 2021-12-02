#include "polynomial.h"

/* 

Aufgabe 8.2

Was wird gefordert?


*/


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



int main() {
	int n;
	printf("Eingabe Grad n = ");
	scanf("%d", &n);

	Poly* vector = NULL;
	vector = newPoly(n);

	int i;
	for(i=0;i<n;i++) {
		printf("%.2f\n", vector->entry[i]);
	}

	// get poly degree
	int degree = getPolyDegree(vector);
	printf("Grad des Polynoms = %d\n", degree);


	// get second coefficient
	double a2;
	int j;
	printf("Which n-th coefficient would you like to get?\n");
	scanf("%d",&j);
	a2 = getPolyCoefficient(vector,j);
	printf("%.2f\n", a2);


	// change third coefficient
	double new_coeff;
	printf("Value for new coefficient = ");
	scanf("%lf", &new_coeff);
	printf("Welche Stelle?\n");
	scanf("%d", &j);
	setPolyCoefficient(vector,j,new_coeff);

	// check if change worked
	printf("%.2f\n", getPolyCoefficient(vector,j));


	delPoly(vector);
}



/* 
	Testing

Case 1:

Case 2:

Case 3:


*/ 