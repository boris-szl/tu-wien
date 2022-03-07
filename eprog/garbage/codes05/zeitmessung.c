// include some libraries
#include <stdio.h>
#include <math.h>
#include <time.h>

// include library for dynamic storage allocation
// see line 27-29 below
#include <stdlib.h>

// define minimal and maximal problem size
#define NMIN (int)1e3
#define NMAX (int)1e9

// include codes from last slides
#include "aufwand_search.c"
#include "aufwand_binsearch.c"
#include "aufwand_minsort.c"

main() {
  int n = NMIN;
  int j = 0;
  int tmp;
  clock_t start = 0;
  clock_t runtime = 0;
  clock_t previous_runtime = 0;

 // allocate dynamic vector ==> int vector[NMAX];
  printf("*** allocate integer vector, length=%d\n",NMAX);
  int* vector = malloc(NMAX*sizeof(int));
 
  // initialize vector with deterministic data
  printf("*** initialize vector\n");
  for (j=0; j<NMAX; ++j) {
    vector[j] = j;
  }
  
  /*
    // alternative: initialize vector with random numbers
    srand(time(NULL));
    // fill the vector with non-negative random numbers
    printf("*** generate random numbers\n");
    for (j=0; j<NMAX; ++j) {
      vector[j] = rand();
    }
  */
  
  // print the runtime for various vector lengths
  printf("*** determine computing times\n");
  for (n = NMIN; n <= NMAX; n = 2*n) {
    // save start time, call function, determine runtime
    start = clock();
    
    // tmp = search(vector,-1,n); // linear complexity
    // tmp = binsearch(vector,-1,n); // logarithmic compl.
    minsort(vector,n); // quadratic complexity
    
    runtime = clock() - start;
    
    // print runtime (and relative increase of runtime)
    if (n == NMIN) {
      printf("n=%d, runtime=%1.2f\n",n,
             (double) runtime/CLOCKS_PER_SEC);
    }
    else {
      printf("n=%d, runtime=%1.2f, factor=%1.2f\n",
             n, (double) runtime/CLOCKS_PER_SEC,
             (double) runtime/previous_runtime);
    }
    previous_runtime = runtime;
  }
}
