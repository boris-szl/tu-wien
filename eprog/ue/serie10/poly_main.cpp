#include "polynomial.hpp"
#include <iostream>



using std::cin;
using std::cout;
using std::endl;

int main() {

	//testing for exercise 10.2

	// testing first constructor
	Poly poly_1;
	// get the degree -> output should be 0
	cout<<"Degree = "<<poly_1.getDegree()<<endl;
	// get length -> output should be 1
	cout<<"Length = "<<poly_1.getLength()<<endl;

	// get first entry -> output should yield assertion error
	// cout<<poly_1.getCoeff(1)<<endl;
	// cout<<poly_1.getCoeff(0)<<endl;

	// testing second constructor
	Poly poly_2(4);
	cout<<"Degree = "<<poly_2.getDegree()<<endl;
	// testing coeff -> yields assertion error
	// cout<<"Koeffizient = "<<poly_2.getCoeff(2)<<endl;

	// testing konstrukto
	Poly poly_3(3,2);
	cout<<"Degree = "<<poly_3.getDegree()<<endl;
	cout<<"Length = "<<poly_3.getLength()<<endl;
	cout<<poly_3.getCoeff(0)<<endl;
	cout<<poly_3.getCoeff(3)<<endl;

	return 0;
}