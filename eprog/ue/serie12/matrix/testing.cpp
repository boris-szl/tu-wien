/**
 * UE 12.1
 */

#include <cassert>
#include <iostream>

#include "matrix.hpp"
#include "symmetric_matrix.hpp"
#include "diagonal_matrix.hpp"

using std::cin;
using std::cout;
using std::endl;

void scanVector(Vector& vector) {
    double input = 0;

    for (int i = 0; i < vector.size(); ++i) {
        input = 0;
        std::cout << "  vector[" << i << "] = ";
        std::cin >> input;
        vector.set(i, input);
    }
}

void printVector(const Vector& vector) {
    for (int i = 0; i < vector.size(); ++i) {
        std::cout << "  vector[" << i << "] = " << vector.get(i) << std::endl;
    }
}


void task_1() {
    int n;
    cout << "n = ";
    cin >> n;
    cout << "Matrix A:" << endl;
    Matrix A(n);
    A.scanMatrix(n);

    cout << "Matrix B:" << endl;
    Matrix B(n);
    B.scanMatrix(n);

    cout << std::endl << "-A:" << endl;
    (-A).printMatrix();

    cout << std::endl << "A + B:" << endl;
    (A + B).printMatrix();

    cout << std::endl << "A - B:" << endl;
    (A - B).printMatrix();

    cout << std::endl << "A * B:" << endl;
    (A * B).printMatrix();
}

void task_3() {

    cout << "Matrix A =" << endl;
    Matrix A(3);
    A.scanMatrix(3);

    cout << "Vector x =" << endl;
    Vector x(3);
    scanVector(x);

    cout << "Scalar s = ";
    double s = 0.0;
    cin >> s;

    cout << endl << "~A:" << endl;
    (~A).printMatrix();

    cout << endl << "A * x:" << endl;
    printVector(A * x);
    
    cout << std::endl << "A * s:" << endl;
    (A * s).printMatrix();

    cout << std::endl << "s * A:" << endl;
    (s * A).printMatrix();

}

void task_4() {

    cout << "Matrix A =" << endl;
    Matrix A(3);
    A.scanMatrix(3);

    // Vergleich
    // Testen von A.printMatrix();
    // Ausgabe der Matrix durch A.printMatrix;
    cout << std::endl << "A.printMatrix():" << std::endl;
    A.printMatrix();

    // Testen von std::cout << A;
    // In dem Fall muss nicht A.printMatrix() geschrieben werden
    cout << std::endl << "std::cout << A:" << endl;
    cout << A << endl;

}

void task_6() {

    /*Eine symmetrische Matrix ist in der Mathematik eine quadratische Matrix, 
    deren Einträge spiegelsymmetrisch bezüglich der Hauptdiagonale sind. 
    Eine symmetrische Matrix stimmt demnach mit ihrer transponierten Matrix überein. */

    /*
    Aufgrund der Symmetrie wird eine symmetrische Matrix  bereits durch ihre n 
    Diagonaleinträge und die Einträge unterhalb (oder oberhalb) der Diagonalen eindeutig charakterisiert. 
    */

    cout << "Matrix A =" << endl;
    Matrix A(3);
    A.scanMatrix(3);

    SymmetricMatrix C = A;
    C.printMatrix();

}

void task_7() {

    /*Als Diagonalmatrix bezeichnet man in der linearen Algebra eine quadratische Matrix, 
    bei der alle Elemente außerhalb der Hauptdiagonale Null sind. Diagonalmatrizen sind
    deshalb allein durch die Angabe ihrer Hauptdiagonalen bestimmt. */

    cout << "Matrix A =" << endl;
    Matrix A(3);
    A.scanMatrix(3);

    DiagonalMatrix C = A;
    C.printMatrix();

}


int main() {

    // task_1();
    // task_3();
    // task_4();
    task_6();
    // task_7();

}