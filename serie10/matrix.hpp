#ifndef INCLUDE_MATRIX__
#define INCLUDE_MATRIX__

#include <cmath>
#include <cstdlib>
#include <cassert>

// Bibliothek für quadratische Matrix


// The class Matrix stores in Rd

class Matrix {
private: 
	// dimension of the Matrix
	int dim;
	double* coeff;
public:
	// constructor and destructor
	Matrix();
	Matrix(int dim);
	Matrix(int dim, double value);
	~Matrix();

	// return matrix dimension
	int size();

	// reand and write coefficients
	void set(int k, double value);
	double get(int k);

	// compute Euclidian norm
	double norm();

	// 

};

#endif