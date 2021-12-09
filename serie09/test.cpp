#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main() {

	string surname = "Boris";
	string name = "Szelcsanyi";
	cout<<name<<endl;
	cout<<surname.length()<<endl;
	cout<<surname.size()<<endl;
	string fullname = "Boris Szelcsanyi";
	cout<<fullname.at(5)<<endl;
	for(int i = 0;i<fullname.length();i++) {
		if (fullname.at(i) == fullname.empty())
			cout<<fullname.at(i)<<endl;
	}
}