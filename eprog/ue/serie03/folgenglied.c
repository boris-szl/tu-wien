#include <stdio.h>
#include <math.h>


double folgenglied(int n) {
	double a; // deklaration des folgeglieds auf datentyp double
	a = pow(-1,n)/(n+2);
	return a;

}

int main() {
	int n;
	printf("Eingabe einer beliebigen nat. Zahl\n");
	scanf("%d", &n);
	printf("Folgegliedf für %d = %f\n", n, folgenglied(n));

	return 0;
}