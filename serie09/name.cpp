#include "name.hpp"

Name::Name() {
	std::cout<<"Leerer Name angelegt"<<std::endl;
}

Name::Name(string surname, string name) {
	this->surname = surname;
	this->name = name;
	std::cout<<surname<<" "<<name<<" angelegt"<<std::endl;
}


string Name::getName() {
	return name;

}
void Name::setName(string name) {
	this->name = name;
}

string Name::getSurname() {
	return surname;
}

void Name::setSurname(string surname) {
	this->surname = surname;
}

void Name::setFullName(string fullname) {
	int i = 0;
	int space_position = 0;
	while (fullname[i]) {
		if (isspace(fullname[i]))
			space_position = i;
		i++;
	}
	// cout last space position
	// for checking purposes
	/* 
		cout<<space_position<<endl;
		cout<<fullname[space_position+1]<<endl;
	*/
	// generate Substrings with range
	// Vorname
	surname = fullname.substr(0,space_position);
	// std::cout<<surname<<std::endl;
	// Nachname
	name = fullname.substr(space_position+1,i);
	// std::cout<<name<<std::endl;
}

void Name::printName() {
	std::cout<<surname<<" "<<name<<std::endl;
}