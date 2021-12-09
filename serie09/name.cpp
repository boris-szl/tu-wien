#include "name.hpp"

string Name::getName() {
	return name;

}
void Name::setName(string name) {
	this->name = name;
}

string Name::getSurname(string) {
	return surname;
}

void Name::setSurname(string surname) {
	this->surname;
}

void Name::setFullName(string full_name) {

	
}

void Name::printName() {
	std::cout<<surname<<" "<<name<<std::endl;
}