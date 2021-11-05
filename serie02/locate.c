#include <stdio.h>
#include <math.h>

// Author: Szelcsanyi Boris
// Last Updated: 20.10.2021
// Aufgabe 2.4


int main() {
	// Quadrat
	// hat 4 seiten : gleiche länge : a=b=c=d => a
	// hat 4 ecken := {(0,0),(L,0),(L,L),(0,L)}.
	// punkt (x,y) € reellen Zahlen


	// Input = Irgendein Punkt (x,y) der 2-dim reellen Zahlen
	// Output = Punkt im Verhältnis zum Quadrat

	// Quadrat
	double l; // deklarattion der länge auf datentype double
	double x,y; // deklration von x,y auf den datentyp double
	printf("Bitte gib die eine beliebige Seitenlänge eines Quadrates ein\n");
	scanf("%lf", &l); // einlesen der tasteneingabe und zuweisung zur variable length
	printf("Ausgangspunkt vom Urpsrung. Dein Quadrat hat folgende Koordinaten:\n");
	printf("(0,0),(%.2f,0),(%.2f,%.2f),(0,%.2f)\n", l,l,l,l);
	printf("Für einen beliebigen Punkt auf der Ebene, wähle:\n");
	printf("x = ");	
	scanf("%lf", &x);
	printf("y = ");
	scanf("%lf", &y);


	if (((x > 0) && (x < l)) && ((y > 0) && (y < l))) {
		printf("im Quadrat\n");
	} else if (((x==0) || (x==l)) && ((y >= 0) && (y <= l))) {
		printf("am Rand\n");
	} else if (((y==0) || (y==l)) && ((x >= 0) && (x <= l))) {	
		printf("am Rand\n"); 
	} else {
		printf("Ausserhalb\n");
	}

	// SOLVED

	// -- GARBAGE --

	// if (((x > 0) && (x < l)) && ((y > 0) && (y < l))) {
	// 	printf("im Quadrat\n");
	// } else if ((((x==0) || (x==l)) && ((y >= 0) && (y <= l))) || (((y==0) || (y==l)) && ((x >= 0) && (x <= l)))) {
	// 	printf("am Rand\n");
	// } else {
	// 	printf("Ausserhalb\n");
	// }


}
