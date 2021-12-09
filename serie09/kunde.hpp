#ifndef INCLUDE_KUNDE__
#define INCLUDE_KUNDE__


#include <cmath>
#include <cassert>
#include <cstdlib>
#include <string>
#include <iostream>


using std::string;

class Customer {
private:
	string name;
	double balance;
	int pin;

public:
	// constructor and deconstructor
	Customer();
	Customer(string,double);

	// get and set methods
	void setName(string);
	string getName();
	void setBalance(double);
	double getBalance();
	void setPin(int);
	int getPin();

	// other methods
	void printBalance();
	bool checkPIN(int);
	void drawMoney(double);

};


#endif
