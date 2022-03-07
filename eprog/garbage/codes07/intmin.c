#include <stdio.h>

main() {
  int j = 0;
  int n = 8*sizeof(int); // number bits per int
  int min = 1;

  // compute 2^(n-1)
  for (j=1; j<n; ++j) {
    min = 2*min;
  }
  printf("n=%d, min=%d, max=%d\n",n,min,min-1);
}
