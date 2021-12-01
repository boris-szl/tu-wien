#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>

int* decToBinary(int N, int* n) {
    // array to store binary number
 	int* binaryVector = NULL;
 	binaryVector = malloc(16*sizeof(int));
 	assert(binaryVector != NULL);

    // counter for binary array
    int count = 0;
    while (N > 0) {
        // storing remainder in binary array
        binaryVector[count] = N % 2;
        N = N / 2;
        *n += 1;
        count++;
    }
	return binaryVector;
}

void printVector(int* vector, int length) {
	int j = 0;
	assert(vector != NULL);
	assert(length);
	for (j=0;j<length;++j) {
		printf("%d",vector[j]);
	}
}
 
// Driver program to test above function
int main() {
    int N;
    int n = 0;
    int* binary = NULL;
    int length = 16;
    printf("Eingabe einer Zahl:\n");
    scanf("%d", &N);
    binary = decToBinary(N,&n);
    printf("Länge des Vektors: %d\n", n);
    printf("Binärdarstelung der Zahl %d: ",N);
    for(int i=n-1;i>=0;i--) {
    	printf("%d",binary[i]);
    }
    printf("\n");

}


/* Testing



*/
