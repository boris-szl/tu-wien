#include "kunde.hpp"

Customer::Customer(){
	std::cout<<"Leerer Kunde angelegt"<<std::endl;
}

Customer::Customer(string name, double balance) {
	this->name = name;
	this->balance = balance;
	// A typical way to generate trivial pseudo-random numbers in a determined range 
	// using rand is to use the modulo of the returned value by the 
	// range span and add the initial value of the range:
	pin = rand() % 8999 + 1000 ;
}
	// get and set methods
void Customer::setName(string name) {
	this->name = name;
}
string Customer::getName() {
	return name;
	}

void Customer::setBalance(double new_balance) {
	balance = new_balance;
}
double Customer::getBalance() {
	return balance;
}

void Customer::setPin(int new_pin) {
	pin = new_pin;
}

int Customer::getPin() {
	return pin;
}

// other methods
void  Customer::printBalance() {
	std::cout<<"Current Balance: "<<balance<<std::endl;
}

bool Customer::checkPIN(int pin_to_check) {
	if (pin_to_check == pin) {
		return true;
	}
	return false;
}

void Customer::drawMoney(double amount) {
	pin = getPin();
	int input;
	std::cout<<"Eingabe des PINS:\n"<<std::endl;
	std::cin>>input;
	if (input == pin) {
		balance -= amount;
	} else {
		std::cout<<"Falscher PIN"<<std::endl;
	}
}




