#include <stdio.h>

// Funktion für die Eingabe
double scanfpositive() {
	double tau;
	printf("Eingabe vektor:\n");
	while (tau <= 0) {
		scanf("%lf", &tau);
	}
	return tau;
}


// Execute via Hauptprogramm
int main() {

	scanfpositive();
}

// Testing
// Eingabe einer negativen Zahlen
// Für 0 geht es auch nicht