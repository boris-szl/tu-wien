#include "matrix.hpp"


using std::cin;
using std::cout;
using std::endl;

int main() {
	cout<<"Hello World"<<endl;

	// testing .RowSumNorm()
	// Matrix matrix_1;
	// matrix_1.scanMatrix(3);
	// matrix_1.printMatrix();
	// cout<<"row sum norm = "matrix_1.RowSumNorm()<<endl;

	// testing .ColumnSumNorm()
	Matrix matrix_2(3);
	matrix_2.scanMatrix();
	matrix_2.printMatrix();
	cout<<"row sum norm = "<<matrix_2.RowSumNorm()<<endl;
	cout<<"column sum norm = "<<matrix_2.ColumnSumNorm()<<endl;

	// testing .FrobeniusNorm()

	// testing .maxNorm()
	cout<<"norm = "<<matrix_2.maxNorm()<<endl;


	// testing .frobeniusNorm()
	cout<<"frobeniusnorm = "<<matrix_2.frobeniusNorm()<<endl;



	return 0;
}
