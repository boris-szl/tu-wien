#include <stdio.h>
#include <math.h>


// C does not have a built-in operator for exponentiation, 
// because it is not a primitive operation for most CPUs. 
// Thus, it's implemented as a library function.

// Operator "^" has different meaning, it is the bitwise exlusive OR operator
// as we know || is the inclusive OR operator bzw. das einschliessende oder

// somit, importieren wir "math.h" library und nutzen die funktion pow(x,y),
// mit x als Basis und y als Exponenten

int main() {

	// wir testen pow(x,y)
	// Wir wählen sowohl 2 für die Basis als auch für den Exponenten
	int n; // Deklaration des Exponenten n
	int m; // Dekalration der Basis m
	double result;
  	m = -1; // Zuweisung von -1 
  	printf("Gib eine beliebe natürliche Zahl ein:\n");
  	scanf("%d", &n); 
  	result = pow(m,n)/(n+2);
  	printf("Result: %f\n", result); // Ausgabe des Folgenglieds


}