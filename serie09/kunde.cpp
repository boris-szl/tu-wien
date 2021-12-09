#include "kunde.hpp"

Customer::Customer(){
	std::cout<<"Leerer Kunde angelegt"<<std::endl;
}

Customer::Customer(string name, double balance) {
	this->name = name;
	this->balance = balance;
	pin = rand() % 1000 + 8999;
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
		return 1;
	}
	return 0;
}

void Customer::drawMoney(double amount) {
	balance -= amount;
}