
#include <cassert>
#include <iostream>

#include "matrix.hpp"


using std::cin;
using std::cout;
using std::endl;


void aufgabe_11_1() {
	cout << "Matrix A:" << endl;
    Matrix A(4);

    Matrix B = A; // Copy constructor
    B.set(1, 2, 3.0);
    assert(B.get(1, 2) == 3.0);
    assert(A.get(1, 2) == 0.0);

    Matrix C;
    C = A; // Assignment operator
    C.set(2, 3, 4.0);
    assert(C.get(2, 3) == 4.0);
    assert(A.get(2, 3) == 0.0);

    cout << std::endl << "Matrix A:" << endl;
    A.printMatrix();

    cout << std::endl << "Matrix B:" << endl;
    B.printMatrix();

    cout << std::endl << "Matrix C:" << endl;
    C.printMatrix();
}

void aufgabe_11_3() {
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

int main() {

	// aufgabe_11_1();
	// aufgabe_11_3();
	// aufgabe_11_4();
	// aufgabe_11_5();
	return 0;
}

// Cases for 1

// Cases for 3

// Cases for 4

// Cases for 5

