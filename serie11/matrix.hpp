#ifndef INCLUDE_MATRIX__
#define INCLUDE_MATRIX__

#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <ctime>

// Bibliothek für Vektoren und quadratische Matrix

// The class Matrix stores in Rd

class Matrix {
private: 
	// dimension of the Matrix
	int n;
	double** matrix;

public:
	// constructors and destructor
	Matrix();
	Matrix(int n);
	Matrix(int n, double value);

	// task 11.1
	// dreierregel (if copy constructos, then assigment constructor and destructor)
	// copy constructor
	Matrix(const Matrix& rhs);
	// assignment operator
	Matrix& operator=(const Matrix& rhs);
	// destructor
	~Matrix();

	// return matrix dimension
	int size() const;

	// read and write coefficients
	void set(int k, int j, double value);
	double get(int j,int k) const;


	// Aufgabe 10.4
	// for exisiting matrix with n
	void scanMatrix();
	// overwriting matrix with new n
	void scanMatrix(int n);
	void printMatrix(int n);

	double trace() const;

	//  Aufgabe 10.5
	double ColumnSumNorm() const;
	double RowSumNorm() const;
	double frobeniusNorm() const;
	double maxNorm() const;

	void printMatrix();

	// other methods
	void unitMatrix(int n);

	// task 11.3
	double det() const;

	// task 11.4
	bool isDiagonal() const;
	bool isSymmetric() const;

	// task 11.5
	Matrix(int n, double lower_bound, double upper_bound);

};

#endif