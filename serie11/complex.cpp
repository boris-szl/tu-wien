#include "complex.hpp"

#include <iostream>

Complex::Complex(double re, double im) {
	this->re = re;
	this->im = im;
	std::cout<<"object created"<<std::endl;
}

Complex::~Complex() {
	std::cout<<"calling destructor, object deleted"<<std::endl;
}

Complex::Complex(const Complex& rhs) {
	re = rhs.re;
	im = rhs.im;
	std::cout<<"copy constructor"<<std::endl;
}

Complex& Complex::operator=(const Complex& rhs) {
	if (this != &rhs) {
		re = rhs.re;
		im = rhs.im;
		std::cout<<"assignment operator"<<std::endl;
	} else {
		std::cout<<"self assignment"<<std::endl;
	}
	return *this;
}

double Complex::real() const {
	return re;
}

double Complex::imag() const {
	return im;
}

double Complex::abs() const {
	return sqrt(re*re + im+im);
}

void Complex::print() const {
	std::cout<<re<<" + "<<im<<" * i"<<std::endl;
}

Complex::operator double() const {
	return re;
}

const Complex Complex::operator-() const {
	return Complex(-re,-im);
}

const Complex Complex::operator~() const {
	return Complex(re,im);
}


Vector::Vector() {
	int dim;
	coeff = (Complex*) 0;
	std::cout<<"complex vector object created"<<std::endl;
}

Vector::Vector(int dim, Complex value) {
	assert(dim > 0);
	this->dim = dim;
	coeff = new Complex[dim];
	assert(coeff != (Complex*) 0);
	for (int i=0;i<dim;i++) {
		coeff[i] = value;
	}
}

int Vector::size() const {
	return dim;
}

void Vector::print() {
	for (int i = 0;i<dim;i++) {
		std::cout<<coeff[i]<<" + "<<coeff[i]<<" * i"<<std::endl;
	}
}











