#include "matrix.hpp"



using std::cin;
using std::cout;
using std::endl;

/* Testing for Task 11.1 */


int main() {

	// deklaration of necessary variables
	int n;
	int entry;

	cout<<"Definition einer quadratischen Matrix"<<endl;
	cout<<"Testen der Biblitothek"<<endl;

	// prompt the user to define an arbitrary length of n
	cout<<"Choose a integer n € N for the size of the n x n matrix:"<<endl;
	cin>>n;

	// testing the first constructor
	Matrix matrix_1 = Matrix(n);
	// print matrix_1
	matrix_1.printMatrix();

	// test the second constructor
	cout<<"Choose an arbitrary value for the "<<n<<"x"<<n<<" matrix"<<endl;
	cin>>entry;
	Matrix matrix_2 = Matrix(n,entry);
	
	cout<<"matrix size = "<<matrix_2.size()<<endl;
	matrix_1.printMatrix();

	// testing copy constructor
	Matrix matrix_3 = matrix_2;
	matrix_2.printMatrix();

	int size_matrix_1 = matrix_1.size(); // we assign the return value which is a const integer 
	int size_matrix_2 = matrix_2.size(); // same here for matrix_2

	cout<<"Size of matrix_1 = "<<size_matrix_1<<endl;
	cout<<"Size of matrix_2 = "<<size_matrix_2<<endl;






	return 0;
}