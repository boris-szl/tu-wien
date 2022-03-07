#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



// we define minimal and maximal problem size
#define NMIN (int)1e3
#define NMAX (int)1e9

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
	printf("*** allocate integer vector, length=%d\n",NMAX);
	// Wir fordern einen Block also Speicher an, der maximal NMAX also 1e3 int Werte halten soll
	int* vector = malloc(NMAX*sizeof(int));

	// init vector with deterministic data
	printf("*** initialize vector\n");
	for (j=0;j<NMAX;++j) {
		vector[j] = j;
	}

	/*
	// alternative: initiazlize vector with random numbers
	srand(time(NULL));
	// fill the vector with non-negative random numbers
	printf("*** generate random numbers\n");
	for (j=0;j<NMAX,++j) {
		vector[j] = rand();
	}
	*/
	// oben für Test mit Zufallszahlen

	// print the runtime for various vector lengths
	printf("*** determine computing times\n");
	for (n=16;n<=NMAX;n=2*n) {
		// save start time, call function, determine runtime
		start = clock();

		// tmp 0 search(vector, -1,n); // linear complexity
		// tmp = binsearch(vector,-1,n) // logarithmic complexity
		minsort(vector,n); // quadratic complexity
		runtime = clock() - start;

		// print runtime (and relative increase of runtime)
		if (n == NMIN) {
			printf("n=%d, runtime=%1.2f\n", n, (double) runtime/CLOCKS_PER_SEC);
		}
		else {
			printf("n=%d, runtime=%1.2f\n, factor=%1.2f\n", n, (double) runtime/CLOCKS_PER_SEC,
				(double) runtime/previous_runtime);
		}
		previous_runtime = runtime;
	}
}


// Testing 

