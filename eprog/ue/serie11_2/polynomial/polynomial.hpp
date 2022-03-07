#ifndef INCLUDE_POLYNOMIAL__
#define INCLUDE_POLYNOMIAL__

class Polynomial {
private:
    int n; // degree of the polynomial.
    double *coeff; // n+1 coefficients of the polynomial.

public:
    Polynomial(int n);
    ~Polynomial();

    // Copy constructor (VO:273). Required to return polynomial in ue 10.6 diff() method,
    // otherwise a shallow copy will be created and coeff will be freed twice.
    Polynomial(const Polynomial& rhs);

    int degree() const;

    double getCoeff(int i) const;
    void setCoeff(int i, double value);

    // Optional, used for testing.
    void scanPoly(int n);
    void printPoly() const;

    // UE 10.6
    Polynomial diff(int k) const;

    // UE 10.7
    double eval(double x) const;

    // UE 11.8
    double computeIntegral(double alpha, double beta) const;
};

// UE 10.8
Polynomial addPolynomials(const Polynomial& p, const Polynomial& q);

// UE 11.7
const Polynomial prodPolynomials(const Polynomial& p, const Polynomial& q);

#endif