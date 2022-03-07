#include "matrix.hpp"

using std::cin;
using std::cout;
using std::endl;



int main() {

	// // define matrix 3x3, dim = 9, länge aber von 8
	// Matrix matrix_1(3,4);


	// // testen der der .maxNorm() Methode
	// cout<<matrix_1.get(8)<<endl;
	// // set last entry to 10
	// matrix_1.set(8,19);
	// cout<<matrix_1.get(8)<<endl;
	// cout<<matrix_1.maxNorm()<<endl;
	// matrix_1.set(5,123);
	// cout<<matrix_1.maxNorm()<<endl;

	// testen der .columnSumNorm() Methode
	// define matrix 4x4, dim = 16, länge 15, einträgen 0
	Matrix matrix_2(3);
	// matrix_2.set(8,9);
	matrix_2.printMatrix();
	cout<<matrix_2.get(8)<<endl;





}