#include <stdio.h>

void callByReference(double y[3]) {
  printf("a) y = (%f, %f, %f)\n",y[0],y[1],y[2]);
  y[0] = 1;
  y[1] = 2;
  y[2] = 3;
  printf("b) y = (%f, %f, %f)\n",y[0],y[1],y[2]);
}

main() {
  double x[3] = {0,0,0};
  
  printf("c) x = (%f, %f, %f)\n",x[0],x[1],x[2]);
  
  // function call modifies the coefficients!
  callByReference(x);
  printf("d) x = (%f, %f, %f)\n",x[0],x[1],x[2]);
}
