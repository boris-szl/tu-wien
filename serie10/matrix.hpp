#ifndef INCLUDE_MATRIX__
#define INCLUDE_MATRIX__

#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>

// Bibliothek für Vektoren und quadratische Matrix

// The class Matrix stores in Rd

class Matrix {
private: 
	// dimension of the Matrix
	int n;
	int dim;
	double** matrix;
public:
	// constructor and destructor
	Matrix();
	Matrix(int n);
	Matrix(int n, double value);
	~Matrix();

	// return matrix dimension
	int size();

	// reand and write coefficients
	void set(int k, int j, double value);
	double get(int j,int k);


	// Aufgabe 10.4
	// for exisiting matrix with n
	void scanMatrix();
	// overwriting matrix with new n
	void scanMatrix(int n);
	void printMatrix(int n);
	double trace();

	//  Aufgabe 10.5
	double ColumnSumNorm();
	double RowSumNorm();
	double frobeniusNorm();
	double maxNorm();

	void printMatrix();

	// other methods
	void unitMatrix(int n);

};

#endif