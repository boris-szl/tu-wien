#ifndef INCLUDE_UNIVERSITY__
#define INCLUDE_UNIVERSITY__

#include <cmath>
#include <cstdlib>
#include <cassert>
#include <string>
#include <iostream>

using std::string;

class University {
private:
	string name;
	string city;
	int num_students;
public:
	University();

	// get and set methods
	string getName();
	void setName(string);
	string getCity();
	void setCity(string);
	int getNumStudents();
	void setNumStudents(int);

	// add student
	void newStudent();
	// student which graduated
	void graduate();



};

#endif