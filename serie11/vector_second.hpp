#ifndef INCLUDE_VECTOR_SECOND__
#define INCLUDE_VECTOR_SECOND__


#include <cmath>
#include <cstdlib>
#include <cassert>


class Vector {
private:
	int dim;
	double* coeff;

public:
	// constructor and destructor
	Vector();
	Vector(int dim, double value);
	~Vector();

	// copy constructor
	Vector(const Vector& rhs);

	// assignment operator
	Vector& operator=(const Vector& rhs);

	// get and set
	// get size
	int size() const;

	void set(int k, double value); 

	// euclidian norm
	double norm() const; 

};


#endif