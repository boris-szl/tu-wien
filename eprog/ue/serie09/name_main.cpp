#include "name.hpp"



using std::cout;
using std::endl;
using std::cin;




int main() {

	Name test_name_1;
	Name test_name_2("Max","Mustermann");
	cout<<test_name_2.getName()<<endl;
	cout<<test_name_2.getSurname()<<endl;
	test_name_1.setFullName("Max Gustaf Heinrich Mustermann");
	cout<<test_name_1.getSurname()<<endl;
	cout<<test_name_1.getName()<<endl;
	test_name_1.printName();
}