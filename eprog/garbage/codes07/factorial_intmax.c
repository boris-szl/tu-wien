#include <stdio.h>

main() {
  int n = 1;
  int factorial = 1;

  do {
    ++n;
    factorial = n*factorial;
    printf("n=%d, n!=%d\n",n,factorial);
  } while (factorial < n*factorial);

  printf("n=%d, n!>%d\n",n+1,n*factorial);
}
