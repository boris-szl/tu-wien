#include <stdio.h>

main() {
  int j = 0;
  int n = 100;

  int sum = 0;

  for (j=1; j<=n; j++) {
    sum = sum+j;
  }

  printf("sum_{j=1}^{%d} j = %d\n",n,sum);
}
