#include <stdio.h>


double skalarprodukt(double a, double b, double c, double x, double y, double z) {
	return a*x+b*y+c*z;

}

int main() {
	double a,b,c,x,y,z;
	printf("Eingabe von der Werte (a,b,c,x,y,z):\n");
	// scanf("%lf,%lf,%lf,%lf,%lf,%lf", &a, &b, &c, &x, &y, &z);
	printf("a = " );
	scanf("%lf", &a);
	printf("b = " );
	scanf("%lf", &b);
	printf("c = " );
	scanf("%lf", &c);
	printf("x = " );
	scanf("%lf", &x);
	printf("y = " );
	scanf("%lf", &y);
	printf("z = " );
	scanf("%lf", &z);
	double w = skalarprodukt(a,b,c,x,y,z); // deklaration und initialisierung des output werts, wobei die der rückgabe wert der funktion skalarpordukt der variable w zugewiesen wird 
	printf("%.2f\n", w); // tastenausgabe eines double werts gerundent auf zwei dezimalstellen

}