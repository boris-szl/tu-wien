#include <stdio.h>
#include <math.h>
#include <assert.h>


// bisektoion ermöglicht eine approximative Bestimmung der wurzel einer belibigen Zahl x0
// eine  reellen stetigen skalar function fct mit fct(a) * fct(b) <= 0, für welche der Zwischenwertsatz 
// die Existenz einer voraussagt
//
// die bisektion nimmt einen funktionspointer der funktion fct: [a,b] -> R and tolerance tol and returns x0
// in (a,b), sodass |x0 - x| <= tol, wo fct(x) = 0

double bisection(double (*fct)(double x), double a, double b, double tol);


// demo function, die Funktion auf welcher wir die Bisektion anwenden
double f(double x) {
	return x*x + exp(x) - 2;
}

int main() {
	double a = 0;
	double b = 10;
	double tol = 1e-12;

	double x = bisection(f,a,b,tol);
	printf("Approximate zero of the function x=%1.15e\n",x);
}


double bisection(double (*fct)(double x), double a, double b, double tol) {
	double m = 0;
	double fa = 0;
	double fm = 0;

	// ensure that input is admissible
	assert(a < b);
	fa = fct(a);
	assert(fa*fct(b) <= 0);

	// iterate by interval bisection
	while (b - a > 2*tol) {
		// compute interval mitpoint and evaluate fct
		m = (a+b)/2;
		fm = fct(m);
		if ( fa * fm <= 0) {
			// theorem guarantees root in [a,m]
			b = m;
		}
		else {
			// theorem gurantees root in [m,b]
			a = m;
			fa = fm;
		}
	}
	// as loop termiante, x in [a,b] and |b - a| <= 2*tol
	// so that |x-m| <= tol for the midpoint m.
	return m;
}


