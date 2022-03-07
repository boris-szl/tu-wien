#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 10/11/2021

void scanVector(int n, double x[]);
void printUnique(int n, double x[]);

int main() {
	int n; // deklaration der variable n, welche die Länge des Arrays repräsentiert
	double a[n]; // Definieren eine Array mit der Länge n
	printf("Einlesen der Vektorlänge\n");
	scanf("%d", &n);
	scanVector(n,a);
	printUnique(n,a);

}

void scanVector(int n, double x[]) {
	int i;
	for (i=0;i<n;i++) {
		scanf("%lf", &x[i]);
	}
}

void printUnique(int n, double x[]) {
	int i,j,c,k;
	for (i=0;i<n;i++) {
		c=0;
		for(j=0;j<i;j++) {
			if (x[i] == x[j]){
				c++;
			}
		}
		for (k=i+1;k<n;k++) {
			if (x[i] == x[k]) {
				c++;
			}
		}
		if (c==0) {
			// printing unique element
			printf("%lf ", x[i]);
		}
	}
	printf("\n");
}


// Testing
// Vektorlänge 6 mit folgenden Werten (1,1,1,1,3,4)
// Vektorlänge 8 mit negativen Zaheln (-2,-2,-3,-2,-2,1,1,1,1)
// Output: -3
// Vektorlänge 3 mit keinem uniqueElemente (1,1,1)




