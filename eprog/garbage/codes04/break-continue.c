#include <stdio.h>

main() {
  int j = 0;
  int k = 0;
  
  for (j=0; j<4; ++j) {
    if (j%2 == 0) {
      continue;
    }
    for (k=0; k < 10; ++k) {
      printf("j=%d, k=%d\n",j,k);
      if (k > 1) {
        break;
      }
    }
  }
  printf("End: j=%d, k=%d\n",j,k);

}
