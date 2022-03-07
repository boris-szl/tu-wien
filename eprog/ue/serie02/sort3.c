#include <stdio.h>
#include <math.h>


int main() {

	int i, j;
	double a;
	double array[3];
	printf("Eingabe von 3 Zahlen\n");
	for (i = 0; i < 3; ++i){
		scanf("%lf", &array[i]);
	}
	// sorting max as beginning value
	for (i=0; i < 3; ++i) {
		for (j=i+1; j < 3; ++j) {
			if  (array[i] < array[j]) {
				a = array[i];
				array[i] = array[j];
				array[j] = a;
			}
		}
	}
	for (i=0; i < 3; ++i) {
		printf("%f ", array[i]);
	}
	printf("\n");
}