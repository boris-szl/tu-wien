#ifndef INCLUDE_VECTOR__
#define INCLUDE_VECTOR__

#include <cmath>
#include <cstdlib>
#include <cassert>

// The class Vector stores in Rd

class Vector {
private:
	// dimension of the vector
	int dim;
	// dynamic coefficient vector
	double* coeff;
public:
	// constructor and destructor
	Vector();
	Vector(int, double = 0);
	~Vector();

	// return vector dimension
	int size();

	// read and write vector coefficient
	void set(int k, double value);
	double get(int k);

	// compute Euclidian norm
	double norm();

	double multiplyleft(Vector)

};

#endif