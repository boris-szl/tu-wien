#include "matrix.hpp"

using std::cout;
using std::cin;
using std::endl;


int main() {

	// main for testing exercise 10.1 the library
	// testing standard constructor
	Matrix matrix_1;
	cout<<"Matrixdimension = "<<matrix_1.size()<<endl;

	// testing second constructor
	Matrix matrix_2(2);
	// Quadratsche Matrix mit n^2 anlegen -> dim = 4
	cout<<"Matrixdimension = "<<matrix_2.size()<<endl;

	// testing third constructor
	Matrix matrix_3(3,4);
	cout<<"Matrixdimension = "<<matrix_3.size()<<endl;

	// get first entry k-1 = 1-1 = 0
	cout<<matrix_3.get(0,0)<<endl;

	// get last entry
	cout<<matrix_3.get(2,2)<<endl;
	// test for assertion
	// cout<<matrix_3.get(3,3)<<endl;



	return 0;
}