#include "triangle.hpp"

void Triangle::setA(double x0, double x1) {
	a[0] = x0;
	a[1] = x1;
}

void Triangle::setB(double y0, double y1) {
	b[0] = y0;
	b[1] = y1;
}


void Triangle::setC(double z0, double z1) {
	c[0] = z0;
	c[1] = z1; 
}

double Triangle::getArea() {
	return 0.5*fabs( (b[0]-a[0])*(c[1]-a[1]) - (c[0]-a[0])*(b[1]-a[1]) );
}

// seien x,y,z vektoren, dann berechnet sich der Umfang Perimeter
// wobei die summanden die beträger der vektooren sind
// also |a| + |b| + |c| = Umfang
// https://de.wikipedia.org/wiki/Vektor

double Triangle::getPerimeter() {
	return fabs( (a[0] + a[1]) + (b[0] + b[1]) + (c[0] + c[1]) );
}

bool Triangle::isEquilateral() {
	if (fabs(a[0] + a[1]) == fabs(b[0] + b[1])) {
		if (fabs(b[0] + b[1]) == fabs(c[0] + c[1])) {
			return true;
		}
	}
	return false;
}
