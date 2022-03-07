#include <stdio.h>
#include <math.h>


int main() {
	// Code

	double a,b,c;
	do {
		printf("Eingabe der Seiten (a,b,c), mit a,b,c nicht 0.\n");
		printf("a = ");
		scanf("%lf", &a);
		printf("b = ");
		scanf("%lf", &b);
		printf("c = ");
		scanf("%lf", &c);
	} while (a == 0 || b == 0 || c == 0);

	printf("Das Dreick ist:\n");
	if (a == b == c) {
		printf(" - gleichseitig\n");
	}
	if (a == b || a == c || b == c) {
		printf(" - gleichschenkelig\n");
	} 
	if (!(a == b || a ==c || b == c)) {
		printf(" - unregelmässig\n");
	}
	if (pow(c,2) == (pow(a,2) + pow(b,2))) {
		printf(" - rechtwinkelig\n");
	}
	if (c == (a + b)) {
		printf(" - eindimnesional\n");
	} 
	if (c > (a + b)) {
		printf(" - unmgöglich\n");
	} 
}
