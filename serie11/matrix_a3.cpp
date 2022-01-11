#include "matrix.hpp"


using std::cin;
using std::cout;
using std::endl;

int main() {
	cout<<"Hello World"<<endl;

	// standard constructor && .printMatrix() 
	Matrix matrix_1;
	matrix_1.printMatrix();
	// user defined constructor && .printMatrix()
	Matrix matrix_2(4);
	matrix_2.printMatrix();

	// thrid constructor && .printMatrix()
	Matrix matrix_3(5,1);
	matrix_3.printMatrix();

	// testing .scanMatrix()
	// matrix_1.scanMatrix(); assertion error
	matrix_1.scanMatrix(3);
	matrix_1.printMatrix();

	// testing traceMethod mit 3x3 matrizen
	cout<<"tr(matrix_3) = "<<matrix_3.trace()<<endl;
	cout<<"tr(matrix_1) = "<<matrix_1.trace()<<endl;
	// 1) summe der hauptdiagonale = 0
	// 2) summe der hauptdiagonale = negativ
	// 3) summe der hautpdiagonale = positiv

	// test .unitMatrix()
	Matrix matrix_4;
	matrix_4.unitMatrix(3);
	matrix_4.printMatrix();
	cout<<"tr(matrix_4) = "<<matrix_4.trace()<<endl;
}
