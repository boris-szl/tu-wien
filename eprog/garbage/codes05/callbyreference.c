#include <stdio.h>

void test(int* y) {
  printf("a) *y=%d\n", *y);
  *y = 43;
  printf("b) *y=%d\n", *y);
}

main() {
  int x = 12;
  printf("c) x=%d\n", x);
  test(&x);
  printf("d) x=%d\n", x);
}
