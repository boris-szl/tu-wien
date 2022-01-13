

#include <cassert>
#include <iostream>

#include "complex_vector.hpp"

using std::cin;
using std::cout;
using std::endl;

void general() {
    ComplexVector A(10);
    cout << A.size() << endl;
    cout << A.get(1) << endl;
}

void aufgabe_11_2() {

    ComplexVector A(10);
    ComplexVector B = A;
    ComplexVector C;
    C = A;

    B.set(1, Complex(2.0, 3.0));
    assert(A.get(1).real() == 0.0 && A.get(1).imag() == 0.0);
    assert(B.get(1).real() == 2.0 && B.get(1).imag() == 3.0);

    C.set(2, Complex(4.0, 5.0));
    assert(A.get(2).real() == 0.0 && A.get(2).imag() == 0.0);
    assert(C.get(2).real() == 4.0 && C.get(2).imag() == 5.0);

    cout << "All tests passed!" << endl;
}

void aufgabe_11_6() {

    ComplexVector A(5);
    A.set(0, Complex(1, 2));
    A.set(1, Complex(-4, 5));
    A.set(2, Complex(11, 0));
    A.set(3, Complex(-9, 0.001));
    A.set(4, Complex(2.5, 23));

    Vector real = A.realPart();
    Vector imag = A.imaginaryPart();

    cout << "Real part of A:" << endl;
    for (int i = 0; i < real.size(); ++i) {
        cout << "real[" << i << "] = " << real.get(i) << endl;
    }

    cout << endl << "Imaginary part of A:" << endl;
    for (int i = 0; i < imag.size(); ++i) {
        cout << "imag[" << i << "] = " << imag.get(i) << endl;
    }

    return 0;
}

int main() {
    
    general();
    aufgabe_11_2();
    aufgabe_11_6();

    return 0;
}