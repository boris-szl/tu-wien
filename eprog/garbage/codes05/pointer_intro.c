#include <stdio.h>

main() {
  int var = 1;
  int* ptr = &var;

  printf("a) var = %d, *ptr = %d\n",var,*ptr);

  var = 2;
  printf("b) var = %d, *ptr = %d\n",var,*ptr);

  *ptr = 3;
  printf("c) var = %d, *ptr = %d\n",var,*ptr);

  var = 47;
  printf("d) *(&var) = %d,",*(&var));
  printf("*&var = %d\n",*&var);
    
  printf("e) &var = %p\n", &var);
}
