#include "matrix.hpp"
#include "vector.hpp"


// Für Matrizen
Matrix::Matrix() {
	n = 0;
	dim = 0;
	matrix = (double**) 0;
}

Matrix::Matrix(int n) {
	assert(n>0);
	this->n = n;
	dim = n*n;
	matrix = (double**) malloc(n*sizeof(double*));
	assert(matrix != (double**) 0);


	// allokiert speicher für jede zeile
	// Code nach Schmaranz (S. 133)
	int row_count = n;
	while(row_count--) {
		matrix[row_count] = (double*) malloc(n*sizeof(int*));
	}
	for (int j=0;j<n;j++) {
		for (int k = 0; k<n;k++) {
			matrix[j][k] = 0;
		}
	}
}

Matrix::Matrix(int n, double init) {
	assert(n>0);
	this->n = n;
	dim = n*n;
	matrix = (double**) malloc(n*sizeof(double*));
	assert(matrix!= (double**) 0);
	int row_count = n;
	while(row_count--) {
		matrix[row_count] = (double*) malloc(n*sizeof(int*));
	}
	for (int j=0;j<n;j++) {
		for (int k = 0; k<n;k++) {
			matrix[j][k] = init;
		}
	}
}

Matrix::~Matrix() {
	if (dim > 0) {
		free(matrix);
	}
	std::cout<<"Object deleted"<<std::endl;
}

int Matrix::size() {
	return dim;
}

void Matrix::set(int j, int k, double value) {
	assert(j>=0 && j<n);
	assert(k>=0 && k<n);
	matrix[j][k] = value;
}

double Matrix::get(int j, int k) {
	assert(j>=0 && j<n);
	assert(k>=0 && k<n);
	return matrix[j][k];
}

double Matrix::norm() {
	return 0;
}

// Aufgabe 10.4

void Matrix::scanMatrix() {
	assert(n>0); // aus dem grund weil standardkonstruktor setzt n auf 0 und somit können keine koeffizienten eingelesen werden
	for (int j=0;j<n;j++) {
		for (int k = 0; k<n;k++) {
			std::cout<<"Matrix"<<"["<<j<<"]"<<"["<<k<<"] = ";
			std::cin>>matrix[j][k];
		}
	}
}

void Matrix::scanMatrix(int n) {
	assert(n>0);
	this->n = n;
	dim = n*n;
	matrix = (double**) realloc(matrix,n*sizeof(double*));
	assert(matrix!= (double**) 0);
	int row_count;
	row_count = n;
	while (row_count--) {
		matrix[row_count] = (double*) realloc(matrix[row_count],n*sizeof(int*));
	}
	for (int j=0;j<n;j++) {
		for (int k = 0; k<n;k++) {
			std::cout<<"Matrix"<<"["<<j<<"]"<<"["<<k<<"] = ";
			std::cin>>matrix[j][k];
		}
	}
}

void Matrix::printMatrix() {
	for (int j = 0;j<n;j++) {
		for (int k = 0;k<n;k++) {
			std::cout<<matrix[j][k]<<" ";
		}
		std::cout<<"\n";
	}
}

// Die Spur eienr quadratischen Matrix ist die Summe der Hauptdiagonale dieser Matrix
// Ist die Spur tr(A) = 0, sodann ist die Matrix spurfrei
// Weitere Eigenschaften auf Wikipedia ... 
double Matrix::trace() {
	int sum = 0;
	for (int j=0;j<n;j++){
		for (int k = 0;k<n;k++) {
			if (j == k) {
				sum += matrix[j][k];
			}
		}
	}
	return sum;
}

// Aufgabe 10.5 

double Matrix::RowSumNorm() {
	return 0;
}

double Matrix::ColumnSumNorm() {
	return 0;
}
double Matrix::frobeniusNorm() {
	return 0;
}

double Matrix::maxNorm() { 
	return 0;

}




/*
Eine Matr



*/