#include <iostream>
#include <cassert>
#include <cmath>
#include "ellipse.hpp"

using std::cout;
using std::endl;


Ellipse::Ellipse() {
	center[0] = 0;
	center[1] = 0;
}

void Ellipse::setA(double a) {
	assert(a>0);
	this->a=a;
}

void Ellipse::setB(double b) {
	assert(b>0);
	this->b=b;
}

// get methods
void Ellipse::getCenter() {
	cout<<"Mittelpunkt: "<<"("<<center[0]
	<<","<<center[1]<<")"<<endl;
}

void getA(double);
void getB(double);

// bool methods
bool isInside(double x0, double y0);

bool isCircle();

// print focal points
void printFocalPoints();

// gets the eccentrity of an ellipse
/* Die Exzentrität beschreibt man zunächst die Abweichung
einer Ellipse von der Kreisform
*/
double getEccentrity();
