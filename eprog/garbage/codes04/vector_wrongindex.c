#include <stdio.h>
#define WRONG 1000

main() {
  int x[3] = {0,1,2};
  
  // this coefficient has no reserved memory!
  x[WRONG] = 43;

  // nevertheless, writing and reading is possible!
  printf("x = (%d, %d, %d), x[%d] = %d\n",
	  x[0],x[1],x[2],WRONG,x[WRONG]);
}
