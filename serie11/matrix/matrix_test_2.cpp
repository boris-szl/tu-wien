/**
 * Aufgabe 11.3
 */

#include <cassert>
#include <iostream>

#include "matrix.hpp"

using std::cin;
using std::cout;
using std::endl;

int main() {
    int n;
    std::cout << "Matrix size: ";
    std::cin >> n;

    std::cout << "Matrix:" << std::endl;
    Matrix A(n);
    A.scanMatrix(n);

    std::cout << "Matrix.det() = " << A.det() << std::endl;

    return 0;
}

// Testing

// 1. Fall: 4x4 Matrix

// 2. Fall: 5x5 Matrix

// 3. Fall: 10x10 Matrix