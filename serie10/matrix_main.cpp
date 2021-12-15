#include "matrix.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
	// main for testing the library
	// testing first constructor
	Matrix matrix_1;
	cout<<matrix_1.size()<<endl;

	// testing second constructor
	Matrix matrix_2(2);
	// Quadratsche Matrix mit n^2 anlegen -> dim = 4
	cout<<"Matrixdimension = "<<matrix_2.size()<<endl;

	// testing third constructor
	Matrix matrix_3(3,4);
	cout<<"Matrixdimension = "<<matrix_3.size()<<endl;
	// get first entry k-1 = 1-1 = 0
	cout<<matrix_3.get(0)<<endl;
	// get last entry is dim-1 = 8
	cout<<matrix_3.get(8)<<endl;

	// cout<<matrix_3.get(9)<<endl;
	// -> output assertion error

	// destructor is called at the end
	// of the program


	return 0;
}