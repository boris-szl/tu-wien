#include <stdio.h>
#include <math.h>




int main() {

    int n,k;
    double x = .0;
    unsigned int  z = -5;
    double y = 2.5;
    int a = 0, b = 34.5;
    printf("%lu\n", sizeof(x));
    printf("%lu\n", sizeof(y));
    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(b));
    printf("%d", a);
    printf("%d\n", b); // b is 4 int
    printf("%d\n", z);
}