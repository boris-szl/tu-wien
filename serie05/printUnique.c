#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 10/11/2021

void scanVector(int dim, double x[]);
void printUnique(double x[]);

int main() {
	int n;
	double a[10]; // Dekalartion eines statistischen Arrays der Länge 10
	printf("Einlesen der Vektorlänge\n");
	scanf("%d", &n);
	scanVector(n,a);



}

void scanVector(int dim, double x[]) {
	int i;
	for (i=0;i<dim;i++) {
		scanf("%lf", &x[i]);
	}
}

void printUnique(int dim, double x[]) {
	int i;
	int b[dim];
	for (i=0;i<dim;i++)
}