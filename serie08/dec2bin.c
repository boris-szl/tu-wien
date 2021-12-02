#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>



// Idee der Binärdarstellung
/*
 Dezimalzahlen haben 10 als Basis,
  d. h. jede Ziffer zählt zehnmal 
  so viel wie die Ziffer rechts davon. 

Bei der binären Notation wird die Basis 2 verwendet, 
awas bedeutet, dass jede Position doppelt so viel wert ist
*/

int* decToBinary(int N, int* n) {
    // array to store binary number
 	int* binaryVector = NULL;
 	binaryVector = malloc(16*sizeof(int));
 	assert(binaryVector != NULL);
    assert(N >= 0);
 
    // counter for binary array
    int count = 1;
    while (N > 0) {
        // storing remainder in binary array
        binaryVector[count] = N % 2; // dividieren mit rest, wenn 0 dann 0 wenn 1 dann 1
        N = N / 2; // das folgeglied ist doppelt so viel wert wie der vorgänger
        *n += 1; // pointer n zeigt auf die länge, mittels call by reference 
        count++; // inkrementieren der zählvariable
    }
	return binaryVector; // rückgabe des arrays mit den binärzahlen
}

// Driver program to test above function
// Hautprogramm
int main() {
    int N;
    int n = 0;
    int* binary = NULL;
    int length = 16;
    printf("Eingabe einer Zahl:\n");
    scanf("%d", &N);
    binary = decToBinary(N,&n); // wir übergeben die Dezimalzahl der funktion sowie, die länge mittels &operator
    printf("Länge des Vektors: %d\n", n);
    printf("Binärdarstelung der Zahl %d: ",N);

    for(int i=n;i>0;i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    free(binary)
    binary = NULL;
}

/* Testing

Via: https://www.rapidtables.com/convert/number/decimal-to-binary.html
Oder händische Ermittlung

Input = 0
Desired output = 0

Input = 1
Desired output = 1

Input = -1
Desired output = assertion failed, weil N >= 0;

Input = 77
Länge = 7
Desired output = 1001101

Input = 65535
Länge = 16
Binärdarstellung = 1111111111111111

Input = 655357
Länge = 20
Desired output = 10011111111111111101



*/
