#include <stdio.h>

// Funktion für die Eingabe
double scanfpositive() {
	double tau;
	while (tau <= 0) {
		scanf("%lf", &tau);
	}
	return tau;
}


// Execute via Hauptprogramm
int main() {

	printf("%.2f\n"scanfpositive());
	// scanfpositive();
}