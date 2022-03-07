#include <iostream>
#include <string>
#include <cstddef>
#include <cstring>
#include <cctype>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::size_t;

void function1() {
	char c;
  	int i=0;
  	string str ="Max Mustermann\n";
  	while (str[i]) {
  		c=str[i];
  		if (isspace(c))
  			c='\n';
  		putchar(c);
  		i++;
  	}
}

void function2(string str) {
	string name;
	string surname;
	char c;
	char b;
  	int i=0;
  	while (str[i]) {
  		c=str[i];
  		if (isspace(c))
  			putchar(b);
  		i++;
  	}
}

void function3(string fullname) {
	string name;
	string surname;
	for(int i=0;i<fullname.length();i++) {
		if (isspace(fullname[i])) {
			name = fullname.substr(0,i);
		}
	}
	cout<<name<<endl;
}
void function4(string fullname) {
	string name;
	string surname;
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
	cout<<surname<<endl;
	// Nachname
	name = fullname.substr(space_position+1,i);
	cout<<name<<endl;
}

int main() {

	double x = 2.32;
	double y = 1;
	cout<<x-y<<endl;

}