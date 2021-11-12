#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 10/11/2021


int fibonacci(int n, int type);

int main() {

    int n;
    int type;
    printf("Eingabe einer beliebigen nat. Zahl:\n");
    scanf("%d", &n);
    printf("Eingabe des Berechnungsarts: (1 oder 2):\n");
    scanf("%d", &type);
    printf("Fibonacci: %d\n", fibonacci(n,type));


    return 0;
}


int fibonacci(int n, int type) {
    if (n == 0) {
        return n;
    } else if (n == 1) {
        return n;
    }
    int folgeglied;
    if (type == 2) {
        int t,r;
        for (int i=0;i<n;i++) {
            if (i != 0 && i < 3) {
                t = 1;
                r = 0;
            } else if (i > 4) {
                t = r - t;
            }
            r = t + r;
        }
        folgeglied = r;
    } 
    return folgeglied;
}

