#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Student {
private:
	string lastname;
	int student_id;
public:
	Student() {
		cout<<"Student registered\n";
	}
	Student(string name, int id) {
		lastname = name;
		student_id = id;
		cout<<"Student registered {"<<lastname;
		cout<<" , "<<student_id<<"}\n";
	}
};

int main() {

	Student demo;
	Student variante("Szelcsanyi", 123456); // bei der Deklaration kann man gleich die Parameter übergeben
	return 0;

}