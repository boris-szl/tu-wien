#include "matrix.hpp"

// Für quadratische Matrizen
Matrix::Matrix() {
	n = 0;
	matrix = (double**) 0;
	std::cout<<"object created using first constructor"<<std::endl;
}

// first user-defined constructor
Matrix::Matrix(int n) {
	assert(n>0);
	this->n = n;
	matrix = new double *[n];
	assert(matrix != (double**) 0);

	// allokiert speicher für jede zeile
	// Code nach Schmaranz (S. 133)
	int row_count = n;
	while(row_count--) {
		matrix[row_count] = new double[n];
	}
	for (int j=0;j<n;j++) {
		for (int k = 0; k<n;k++) {
			matrix[j][k] = 0;
		}
	}
	std::cout<<"object created using second constructor"<<std::endl;
}

// seocnd user-defined constructor
Matrix::Matrix(int n, double init) {
	assert(n>0);
	this->n = n;
	matrix = new double *[n];
	assert(matrix!= (double**) 0);
	int row_count = n;
	while(row_count--) {
		matrix[row_count] = new double[n];
	}
	for (int j=0;j<n;j++) {
		for (int k = 0; k<n;k++) {
			matrix[j][k] = init;	
		}
	}
	std::cout<<"object created using second constructor"<<std::endl;
}

// copy constructor
Matrix::Matrix(const Matrix& rhs) {
	std::cout<<"copy constructor"<<std::endl;
	matrix = rhs.matrix;
	n = rhs.n;
}

// assignment operator
Matrix& Matrix::operator=(const Matrix& rhs) {
	std::cout<< "assignment" <<std::endl;
	if (this != &rhs) {
		matrix = rhs.matrix;
		n = rhs.n;
		return *this;
	}
}

// user-defined destructor
Matrix::~Matrix() {
	std::cout<<"Object deleted"<<std::endl;
}

// get size (dimension) of the matrix
int Matrix::size() const {
	return n*n;
}

// change value for a given entry[j][k]
void Matrix::set(int j, int k, double value) {
	assert(j>=0 && j<n);
	assert(k>=0 && k<n);
	matrix[j][k] = value;
}

// get value for a given entry[j][k]
double Matrix::get(int j, int k) const {
	assert(j>=0 && j<n);
	assert(k>=0 && k<n);
	return matrix[j][k];
}

// Aufgabe 10.4
// manually set every entry for a given matrix
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

// print each entry of a given matrix
void Matrix::printMatrix() {
	for (int j = 0;j<n;j++) {
		for (int k = 0;k<n;k++) {
			std::cout<<matrix[j][k]<<" ";
		}
		std::cout<<"\n";
	}
}

// Die Spur eienr quadratischen Matrix ist die Summe der Hauptdiagonale dieser Matrix
// Wenn die Spur tr(A) = 0, dann heisst die Matrix ist spurfrei
// Weitere Eigenschaften: ... 
double Matrix::trace() const {
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

// returns the column norm of a given matrix
double Matrix::ColumnSumNorm() const {
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

// returns the row norm of a given matrix
double Matrix::RowSumNorm() const {
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

double Matrix::frobeniusNorm() const {
	double sum;
	sum = 0;
	for (int j=0;j<n;j++) {
		for (int k=0;k<n;k++) {
			sum += pow(matrix[j][k],2);
		}
	}
	return sqrt(sum);
}

// returns the max of a given matrix
double Matrix::maxNorm() const { 
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
// creates a unit matrix
void Matrix::unitMatrix(int n) {
	assert(n>0);
	this->n = n;
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



// task 11.3
// laplacescher Entwicklungssatz
// Ermittlung der determinante durch den entwicklungsatz von laplace
double Matrix::det() const;

// task 11.4
bool Matrix::isDiagonal() const;
bool Matrix::isSymmetric() const;

// task 11.5
Matrix::Matrix(int n, double lower_bound, double upper_bound) {
	
}





