#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



// we define minimal and maximal problem size
#define NMIN(int)1e3
#define NMAX(int)1e9

// include source_codes
#include "aufwand_search.c"
#include "aufwand_binsearch.c"
#include "aufwand_minsort.c"



int main() {
	int n = NMIN;
	int j = 0;
	int tmp;
	clock_t start = 0;
	clock_t runtime = 0;
	clock_t previous_runtime = 0;


// Allocate dynamic vector ==> int vector[NMAX]
	printf("***allocate integer vectro, lenght=%d\n",NMAX);
	// Wir fordern einen Block also Speicher an, der maximal NMAX also 1e3 int Werte halten soll
	int* vector = malloc(NMAX*sizeof(int));
}


// Testing 

