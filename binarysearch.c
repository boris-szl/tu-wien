#include <stdio.h>

// Author: Boris Szelcsanyi
// Date created: 
// Last updated:


void scanVector(int vector[], int n);
int binarysearchvector(int vector[], int value, int n);

int main() {

	int n;
	int a[10];
	printf("Enter size of the vector:\n");
	scanf("%d", &n);
	scanVector(a,n);
	int value;
	printf("Enter value you are looking for:\n");
	scanf("%d", &value);
	binarysearchvector(a,value,n);
	return 0;

}

void scanVector(int vector[], int n) {
	for (int i=0;i<n;i++) {
		scanf("%d", &vector[i]);
	}
}

int binarysearchvector(int vector[], int value, int n) {
	int j = 0;
	int start = 0;
	int end = n-1;

	while (start <= end) {
		j = 0.5*(end+start);
		if (vector[j] == value) {
			return j;
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