#ifndef INCLUDE_NAME__
#define INCLUDE_NAME__



#include <cmath>
#include <cstdlib>
#include <cassert>
#include <string>
#include <iostream>
#include <cctype>

using std::string;


class Name {
private:
	string name;
	string surname;
public:
	Name();
	Name(string, string);
	// get and set methods
	string getName();
	void setName(string);
	string getSurname();
	void setSurname(string);
	void setFullName(string);
	void printName();
};
















#endif