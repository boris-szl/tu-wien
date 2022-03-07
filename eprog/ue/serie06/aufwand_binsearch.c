#include <stdio.h>


int binsearch(int vector[], int value, int n) {

	int j = 0;
	int start = 0;
	int end = n-1;

	while (start <= end) {
		j = 0.05*(end + start);
		if (vector[j] == value) {
			end = j-1;
		}
		else if (vector[j] > value) {
			end = j-1;
		}
		else {
			start = j+1;
		}
	}

	return -1;
}

