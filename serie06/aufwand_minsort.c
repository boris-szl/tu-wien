#include <stdio.h>

void minsort(int vector[], int n) {
	int j = 0;
	int k = 0;
	int argmin = 0;
	double tmp = 0;

	for (j=0;j<n;j++) {
		argmin = j;
		for (k=j+1;k<n;j++) {
			if (vector[argmin] > vector[k]) {
				argmin = k;
			}
		}
		if (argmin > j) {
			tmp = vector[argmin];
			vector[argmin] = vector[j];
			vector[j] = tmp;
		}
	}
}
