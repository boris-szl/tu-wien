#include <stdio.h>

// Author: Szelscanyi Boris
// Date created: 04/11/2021
// Last updated: 05/11/2021


int check(int x[], int y[]) {
	int i,j; // deklaration der indexvariable
	// wir suchen für jedes elment y[i] in y[] die elemente x[i] aus x[].
	// Wenn alle Element von y[] in x[] existieren, dann ist y[] eine TM von x[]
	for (i=0;i<3;i++) {
		for (j=0;j<6;j++)
		if (y[i] == x[j]) {
			/* Element gefunden*/
			break;
		}
		if (j == 6) {
			// wenn y[i] nicht in x[6] enthalten ist
			return 0;
		}
	}
	// Alle elemente von y[3] in x[6] gefunden
	return 1;
}

int main() {
	// int x[6] = {1,2,3,3,2,1};
	// int y[3] = {3,3,2};
	// printf("%d\n", check(x,y));

	int x[6];
	int y[3];
	printf("Einlesen von x:\n");
	for (int i=0;i<6;i++) {
		scanf("%d", &x[i]);
	}
	printf("Einlesen von y:\n");
	for (int i=0;i<3;i++) {
		scanf("%d", &y[i]);
	}
	printf("%d\n", check(x,y));
}


// Testing
// int x[6] = {1,2,3,3,2,1};
// int y[3] = {3,3,2};

// int x[6] = {1,2,3,4,5,6}
// int y[3] = [1,2,3]

// int x[6] = {1,2,3,4,5,6}
// int y[3] = [7,8,9]

// int x[6] = {-1,-2,-3,-4, 5, 6}
// int y[3] = {-2,-3,-4}

