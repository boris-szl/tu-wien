#include "polynomial.h"



// Aufgabe 8.6


int main() {
	int n;
	printf("Einscannen des Grades:\n");
	scanf("%d", &n);
	Poly* p = NULL;
	p = newPoly(n);
	printPoly(p,n);
	printf("%d\n",getPolyDegree(p));
	printf("\n");
	Poly* p_1 = NULL;
	p_1 = differentialPolynomial(p);
	printPoly(p_1,n);	
	printf("\n");
	Poly* p_2 = NULL;
	p_2 = differentialPolynomial(p_1);
	printPoly(p_2,n);
	printf("\n");


}