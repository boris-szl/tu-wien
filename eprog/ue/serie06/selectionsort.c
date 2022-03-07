#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


double* scanVector(int length);
double* extendVector(double* vector, int new_length);
void printVector(double* vector, int length);
void minsort(double* vector, int length);



int main() {
	// always set pointers to NULL, if not bound to memory
	double* x = NULL; // wir deklarieren einen pointer x auf den datentyp doduble mit wert null (double 8 bytes)
	int dim = 0; // wir legen speicherplatz an mit dem symoblischen namen dim auf den datentyp integer (4 bytes)
	printf("%f\n", x);

	// einlese der Vektorlänge
	printf("dim = ");
	scanf("%d", &dim);

	// allocate vector, read coefficients, and print vector
	x = scanVector(dim); // der r
	printVector(x, dim);

	// sort vector, print sorted vector
	minsort(x, dim); 
	printVector(x,dim);

	// realloc
	// einlesen der neuen Vektorlänge
	int Nnew = 0;
	printf("New dim = ");
	scanf("%d", &Nnew);
	x = extendVector(x, Nnew);
	printVector(x, Nnew);
	minsort(x, Nnew);
	printVector(x, Nnew);



	// do not forget to free memory
	free(x);
	// set pointer x to NULL, since not bound to memory
	x = NULL;
}

// scanVector allokiert einen double vector der 
// festgelegten länge und liest die Koeffizienten von der Tastatureingabe ein
double* scanVector(int length) {
	int j = 0;
	double* vector = NULL;
	assert(length > 0);

	// wir legen einen beliebigen Speicher und stellen mittel der Assertfunktion sicher, dass das erfolgreich war
	vector = malloc(length*sizeof(double));
	assert(vector != NULL);

	// einlesen der Vektorkoeffizienten vom Keyboard
	for (j=0;j<length;j++) {
		vector[j] = 0;
		printf("vector[%d] = ",j);
		scanf("%lf", &vector[j]);
	}
	return vector;
}


// Speicher für eine Funktion, der den Rückgabewert enthät
double* extendVector(double* vector, int length) {
	int j = 0;
	assert(length > 0);
	vector = realloc(vector, length*sizeof(double));
	assert(vector != NULL);

	// einelese der Koeffizienten von der Tastatur
	for (j=0;j<length;j++) {
		printf("vector[%d] = ", j);
		scanf("%lf", &vector[j]);
	}
	return vector;
}

void printVector(double* vector, int length) {
	int j = 0;
	assert(vector != NULL); // der reservierte Speicher darf nicht leer sein
	assert(length > 0); // die Länge muss vorhanden sein
	// Ausgabe der Vektorkoeffizienten
	for (j=0;j<length;j++) {
		printf("vector[%d] = %f\n", j, vector[j]);
	}
}

void minsort(double* vector, int length) {
	int j, k, argmin, tmp = 0;
	for(j=0;j<length-1;j++) {
		// wir legen das minimum im Vektor fest
		// angenommen min is das 0-element
		argmin = j;
		for (k=j+1;k<length;k++) {
			if (vector[argmin] > vector[k]) {
				argmin = k;
			}
		}
		// jetzt ist der vektor[argmin] das minimum 
		if (argmin > j) {
			tmp = vector[argmin];
			vector[argmin] = vector[j];
			vector[j] = tmp;
		}
	}
}


