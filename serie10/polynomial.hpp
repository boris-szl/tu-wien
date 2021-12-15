#ifndef INCLUDE_POLYNOMIAL__
#define INCLUDE_POLYNOMIAL__

#include <cmath>
#include <cstdlib>
#include <cassert>


class Poly {
private:
	int degree;
	int length;
	double* coeff;
public:
	//constructor and destructor
	Poly();
	Poly(int);
	Poly(int, double);
	~Poly();

	// get and set
	int getDegree();
	int getCoeff(int j);
	int getLength();
};


#endif