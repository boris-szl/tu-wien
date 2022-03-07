#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>


 

 int* dec2bin(int N, int* n) {
 	int* vector = NULL;
 	int* länge = NULL;
 	länge = malloc(16*sizeof(int))
 	vector = malloc(länge*sizeof(int));
 	assert(vector != NULL);
 	for (int j=0;j<16;j++) {
 		vector[j] = j;
 	}
 	return vector;
 
 }

int main() {
	int N = 17;
	int länge;
	scanf("%d", &länge);
	dec2bin(N, &länge);

}