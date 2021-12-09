#include "university.hpp"


University::University() {
	num_students = 0;
	std::cout<<"Namenlose Universität mit 0 Studenten wurde angelegt"<<std::endl;
}

	// get and set methods
string University::getName() {
	return name;
}

void University::setName(string name) {
	this->name = name;
}
string University::getCity() {
	return city;
}
void University::setCity(string city) {
	this->city = city;
}
int University::getNumStudents() {
	return num_students;
}
void University::setNumStudents(int num_students) {
	assert(num_students >= 0);
	this->num_students = num_students;
}
	// add student
void University::newStudent() {
	num_students++;
}
	// student which graduate
void University::graduate() {
	num_students--;
	assert(num_students >= 0);
}