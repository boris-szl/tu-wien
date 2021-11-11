#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 10/11/2021

void scanVector(int dim, double x[]);
void printUnique(int dim, double x[]);

int main() {
	int n;
	double a[n]; // Dekalartion eines statistischen Arrays der Länge 10
	printf("Einlesen der Vektorlänge\n");
	scanf("%d", &n);
	scanVector(n,a);
	printUnique(n,a);

}

void scanVector(int dim, double x[]) {
	int i;
	for (i=0;i<dim;i++) {
		scanf("%lf", &x[i]);
	}
}

void printUnique(int dim, double x[]) {
	int i,j,c,k;
	for (i=0;i<dim;i++) {
		c=0;
		for(j=0;j<i;j++) {
			if (x[i] == x[j]){
				c++;
			}
		}
		for (k=i+1;k<dim;k++) {
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
