/**
 * Aufgabe 11.7
 */

#include <cassert>
#include <iostream>

#include "polynomial.hpp"

using std::cin;
using std::cout;
using std::endl;


void aufgabe_11_7() {

    int p_n = 0, q_n = 0;

    cout << "Polynomial p: ";
    cout << "deg(p) = ";
    cin >> p_n;
    Polynomial p(p_n);
    p.scanPoly(p_n);
    p.printPoly();

    cout << endl;
    cout << "Polynomial q: ";
    cout << "deg(q) = ";
    cin >> q_n;
    Polynomial q(q_n);
    q.scanPoly(q_n);
    q.printPoly();

    cout << endl;
    Polynomial prod = prodPolynomials(p, q);
    cout << "(p * q) = ";
    prod.printPoly();

    cout << "All tests passed!" << endl;


}

void aufgabe_11_8() {

    int p_n = 0;

    cout << "Polynomial p: ";
    cout << "deg(p) = ";
    cin >> p_n;
    Polynomial p(p_n);
    p.scanPoly(p_n);
    p.printPoly();

    double alpha = 0.0, beta = 0.0;
    cout << "Alpha: ";
    cin >> alpha;
    cout << "Beta: ";
    cin >> beta;

    cout << endl;
    cout << "p.computeIntegral(alpha, beta) = " << p.computeIntegral(alpha, beta) << endl;

}


int main() {


    // aufgage_11_7();
    // aufgabe_11_8();
    return 0;

}








