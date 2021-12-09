#ifndef INCLUDE_TRIANGLE__
#define INCLUDE_TRIANGLE__

#include <cmath>


// The class Triangle stores a triangle in R2

class Triangle {
private:
	// the coordinates
	double a[2];
	double b[2];
	double c[2];

public:
	// define or chcange the nodes of a trianagle, 
	// e.g., triangle.set(x1, x2) writes the
	// coordinates of teh node x of the trinagle
	void setA(double, double);
	void setB(double, double);
	void setC(double, double);

	// return the area of the triangle
	double getArea();

	// additional methods regarding 9.4

	// berechnung umfang
	// umfang berechnet sich durch
	// herkömmliche Umfangsformel = U = a + b + c
	// wobie die längen durch beträge der Vektoren ersetzt werden
	double getPerimeter();

	// check if gleichseitig
	bool isEquilateral();

};


#endif




