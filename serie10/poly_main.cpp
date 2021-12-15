#include "polynomial.hpp"
#include <iostream>



using std::cin;
using std::cout;
using std::endl;

int main() {

	// testing first constructor
	Poly poly_1;
	// get the degree -> output should be 0
	cout<<poly_1.getDegree()<<endl;
	cout<<poly_1.getLength()<<endl;
	// get first entry -> output should yield assertion error
	// cout<<poly_1.getCoeff(1)<<endl;
	// cout<<poly_1.getCoeff(0)<<endl;

	// testing second constructor
	Poly poly_2(4);
	cout<<poly_2.getDegree()<<endl;
	cout<<poly_2.getLength()<<endl;


	Poly poly_3(4,1);
	cout<<poly_3.getCoeff(3)<<endl;

	return 0;
}