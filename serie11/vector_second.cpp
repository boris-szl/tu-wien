#include "vector_second.hpp"


#include <iostream>



Vector::Vector() {
	dim = 0;
	coeff = (double*) 0;
	std::cout<<"new empty vector created"<<std::endl;
}

Vector::Vector(int n, double value) {
	assert(dim > 0);
	this->dim;
	coeff = new double[dim];
	assert(coeff != (double*) 0)
	for (int=0;i<dim;i++) {
		coeff[i] = value;
	}
}

Vector::~Vector() {
	delete coeff;
	std::cout<<"object deleted"<<std::endl;
}

Vector::Vector(const Vector& rhs) {
	
}