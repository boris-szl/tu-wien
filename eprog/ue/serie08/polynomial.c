#include "polynomial.h"

// Aufgabe 8.2
// Testing

int main() {
	int n;
	printf("Eingabe Grad n = ");
	scanf("%d", &n);

	Poly* p = NULL;
	p = newPoly(n);

	//print poly
	printPoly(p,n);
	// get poly degree
	// printf("Grad des Polynoms = %d\n", getPolyDegree(p));


	// get second coefficient
	double p_2;
	int j;
	printf("Which n-th coefficient would you like to get?\n");
	scanf("%d",&j);
	p_2 = getPolyCoefficient(p,j);
	printf("%.2f\n", p_2);


	// change third coefficient
	double new_coeff;
	printf("Value for new coefficient = ");
	scanf("%lf", &new_coeff);
	printf("Welche Stelle?\n");
	scanf("%d", &j);
	setPolyCoefficient(p,j,new_coeff);

	// check if change worked
	printf("%.2f\n", getPolyCoefficient(p,j));

	// get degree for second coefficient
	// printf("Grad des 2en Koeffizienten ist = %f\n", getPolyCoeffDegree(p,2));

	// create second polynom
	Poly* q = NULL;
	q = newPoly(n);
	printPoly(q,n);


	p = delPoly(p);
	q = delPoly(q);


}
