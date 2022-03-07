
#include <cassert>
#include <iostream>

#include "matrix.hpp"


using std::cin;
using std::cout;
using std::endl;


void aufgabe_11_1() {
	cout << "Matrix A:" << endl;
    Matrix A(4,1);

    Matrix B = A; // Copy constructor
    /* Ein Kopierkonstruktor wird verwendet, 
    um ein zuvor nicht initialisiertes Objekt
    aus den Daten eines anderen Objekts zu initialisieren .
    */
    B.set(1, 2, 100.0);
    assert(B.get(1, 2) == 100.0);
    assert(A.get(1, 2) == 1.0);

    Matrix C;
    C = A; // Assignment operator
    /*
    Ein Zuweisungsoperator wird verwendet, 
    um die Daten eines zuvor initialisierten Objekts 
    durch die Daten eines anderen Objekts zu ersetzen .
    */
    C.set(2, 3, 200.0);
    // assert conditions
    assert(C.get(2, 3) == 200.0);
    assert(A.get(2, 3) == 1.0);

    cout << endl << "Matrix A:" << endl;
    A.printMatrix();

    cout << endl << "Matrix B:" << endl;
    B.printMatrix();

    cout << std::endl << "Matrix C:" << endl;
    C.printMatrix();
}

void aufgabe_11_3() {
    // testing of the la place extension method
    // iterative process that calculates the determinant for any n x n matrix
	int n;
    cout << "Matrix size: ";
    cin >> n;

    cout << "Matrix:" <<endl;
    Matrix A(n);
    A.scanMatrix(n);

    cout << "Matrix.det() = " << A.det() << endl;
}

void aufgabe_11_4() {
	int n;
    cout << "Matrix size: ";
    cin >> n;

    cout << "Matrix:" << std::endl;
    Matrix A(n);
    A.scanMatrix(n);

    cout << "Matrix.isDiagonal() = " << A.isDiagonal() << endl;
    cout << "Matrix.isSymmetric() = " << A.isSymmetric() << endl;
    cout << "Matrix.isSkewSymmetric() = " << A.isSkewSymmetric() << endl;
}

void aufgabe_11_5() {
	int n;
    double lb = 0.0, ub = 0.0;
    cout << "Matrix size: ";
    cin >> n;
    cout << "lb: ";
    cin >> lb;
    cout << "ub: ";
    cin >> ub;

    Matrix A(n, lb, ub);

    std::cout << "Matrix:" << endl;
    A.printMatrix();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            assert(A.get(i, j) >= lb && A.get(i, j) <= ub);
        }
    }
}

// void test_1() {
//     Matrix A(4);
//     A.unitMatrix(4);
//     A.printMatrix();
// }

int main() {

	// aufgabe_11_1();
	// aufgabe_11_3();
	// aufgabe_11_4();
	// aufgabe_11_5();

    // test_1();
	return 0;
}

// Cases for 1

// Cases for 3
/* 
1. 5 x 5 matrix mit einträgen = 1++
    A = (1,2,3, ... , 25)
 2. 4 x 4 matrix with following values 
    A = (3,1,5,1,-1,0,-2,0,4,0,1,-1,0,0,4,1)
    Expected result = -3
// 3. 5 x5 matrix with following values 
    B = (3,0,0,3,0,-3,0,-2,0,0 ... )
    Expected result: -18

*/

// Cases for 4

// Cases for 5

