#include "matrix.hpp"


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

// Aufgabe 10.4
void Matrix::scanMatrix() {
	assert(this->n>0); // aus dem grund weil standardkonstruktor setzt n auf 0 und somit können keine koeffizienten eingelesen werden
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

double Matrix::ColumnSumNorm() {
	double sum;
	double max_sum = 0;
	for (int j=0;j<n;j++) {
		sum = 0;
		for(int k=0;k<n;k++) {
			sum += fabs(matrix[k][j]);
		}
		if (sum > max_sum) {
			max_sum = sum;
		}
	}
	return max_sum;
}

double Matrix::RowSumNorm() {
	double sum;
	double max_sum = 0;
	for (int j=0;j<n;j++) {
		sum = 0;
		for(int k=0;k<n;k++) {
			sum += fabs(matrix[j][k]);
		}
		if (sum > max_sum) {
			max_sum = sum;
		}
	}
	return max_sum;
}

double Matrix::frobeniusNorm() {
	double sum;
	sum = 0;
	for (int j=0;j<n;j++) {
		for (int k=0;k<n;k++) {
			sum += pow(matrix[j][k],2);
		}
	}
	return sqrt(sum);
}

double Matrix::maxNorm() { 
	int max;
	max = 0;
	for (int j=0;j<n;j++) {
		for (int k=0;k<n;k++) {
			if (fabs(matrix[j][k]) > max) {
				max = fabs(matrix[j][k]);
			}
		}
	}
	return max;
}

void Matrix::unitMatrix(int n) {
	assert(n>0);
	this->n = n;
	dim = n*n;
	matrix = (double**) malloc(n*sizeof(double*));
	assert(matrix != (double**) 0);
	int row_count = n;
	while(row_count--) {
		matrix[row_count] = (double*) malloc(n*sizeof(int*));
	}
	for (int j=0;j<n;j++) {
		for (int k=0;k<n;k++) {
			if ( j == k ) {
				matrix[j][k] = 1;
			} else {
				matrix[j][k] = 0;
			}
		}
	}
}

