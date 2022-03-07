#include <stdio.h>

main() {
  int j = 0;
  int n = 5;

  int factorial = 1;

  for (j=1; j<=n; j++) {
    factorial = factorial*j;
  }

  printf("%d! = %d\n",n,factorial);
}
