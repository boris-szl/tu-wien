#include "polynomial.h"


// Aufgabe 8.5
int main() {

	int n;
	printf("Eingabe Grad n = ");
	scanf("%d", &n);

	Poly* a = NULL;
	a = newPoly(n);
	printPoly(a,n);
	Poly* b = NULL;
	b = newPoly(n);
	printPoly(a,n);

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