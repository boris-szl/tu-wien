#ifndef INCLUDE_COMPLEX_VECTOR__
#define INCLUDE_COMPLEX_VECTOR__

#include <cmath>
#include <cstdlib>
#include <cassert>



class Complex {
private:
	double re;
	double im;

public:
	// const & dest
	Complex(double=0, double=0);
	~Complex();
	// copy constructor
	Complex(const Complex& rhs);
	// assignment operator
	Complex& operator=(const Complex& rhs);

	// get and set
	double real() const;
	double imag() const;
	double abs() const;
	void print() const;

	operator double() const;

	const Complex operator~() const;
	const Complex operator-() const;

};

class ComplexVector {
private:
	int dim;
	Complex* coeff;

public:
	ComplexVector();
	ComplexVector(int dim, Complex value=Complex(double,double));

	int size() const;
	void print();

};

#endif