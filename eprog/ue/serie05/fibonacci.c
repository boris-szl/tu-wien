#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 10/11/2021

// https://www.geeksforgeeks.org/c-program-for-fibonacci-numbers/
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
	int folgeglied;
	if (n == 0) {
		return n;
	} else if (n == 1) {
		return n;
	}
	if (type == 1) {
		return fibonacci(n-1,1) + fibonacci(n-2,1);
	} 
	else if (type == 2) {
	    int a = 0, b = 1, c, i;
	    if (n == 0)
	        return a;
	    for (i = 2; i <= n; i++) {
	        c = a + b;
	        a = b;
	        b = c;
	    }
	    folgeglied = b;
	}
	else {
		/* Declare an array to store Fibonacci numbers. */
	    int f[n + 1];
	    int i;
	    /* 0th and 1st number of the series are 0 and 1*/
	    f[0] = 0;
	    f[1] = 1;
	    for (i = 2; i <= n; i++) {
	        /* Add the previous 2 numbers in the series
	         and store it */
	        f[i] = f[i - 1] + f[i - 2];
	    }
	    folgeglied = f[n];
	}
	return folgeglied;
}

// Testing
// Folgeglied für 0 = 0
// Folgegleid für 1,2 = 1
// Folgeglied für 5
// Folgeglied für 10 = 55
// Folgeglied für 12 = 144
// Folgeglied für 20 = 67665
// Folgeglied für 25 = 75025

