#include <stdio.h>

// Author: Szelcsanyi Boris
// Datte: 04.11.2020
// Last updated: 04.11.2020


void scanVektor(double u[]);

void vektorprodukt(double u[], double v[], double w[]) {
	double w_1, w_2, w_3;
	w_1 = u[1] * v[2] - u[2] * v[1];
	w_2 = u[0] * v[2] - u[2] * v[0];
	w_3 = u[0] * v[1] - u[1] * v[0]; 
	printf("w_1 = %f\n", w_1);
	printf("w_2 = %f\n", w_2);
	printf("w_3 = %f\n", w_3);
	w[] = {w_1, w_2, w_3};
	for (int i=0;i<3;i++) {
		printf("%f\n", w[i]);
	}
}

double skalarprodukt(double u[], double v[]) {
	int i,j; // Deklaration dder Indexvariablen j, i
	double result = 0; // Auffangbecken für die Summe
	for (i=0; i<2+1; i++) {
		result += u[i] * v[i];
	}
	return result;
}

int main() {

	double u[3]; // festlegen der grösse des statistischen arrays
	double v[3]; // -- '' -- 
	double w[3]; // -- '' -- 
	printf("Einscannen des Vektors 'u'\n");
	for (int i=0;i<3;i++) {
		scanf("%lf", &u[i]);
	}
	printf("Einscannen des Vektors 'v'\n");
	for (int j=0;j<3; j++) {
		scanf("%lf", &v[j]);
	}

	// Aufrunfen der Funktion "Skalarprodukt"
	printf("%f\n",skalarprodukt(u,v));

	// Aufruen des Funktion "Vektorenprodukt"
	vektorprodukt(u,v,w);
}

// Skalarprodukt
// Testing für kleine Zahlen
// u = (1,2,3), v =(1,2,3)
