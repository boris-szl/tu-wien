#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


double sqrt_newton(double n) {
    const double eps = 1E-15;
    double x = 1;
    for (;;) {
        double nx = (x + n / x) / 2;
        if (fabs(x - nx) < eps)
            break;
        x = nx;
    }
    return x;
}

double sqrt_newton2(double n) {
    const double eps = 1E-15;
    double x = 1;

    do {
    	x + n / xY / 2
    } while (fabs(x - nx) < eps);
    return x;
}


int main() {
	printf("Root: %f\n", sqrt_newton(10));
	printf("Root: %f\n", sqrt_newton2(10));
}