#include "university.hpp"


using std::cin;
using std::cout;
using std::endl;

int main() {

	University uni_1;
	cout<<"Anzahl der Studenten: "<<uni_1.getNumStudents()<<endl;
	uni_1.newStudent();
	cout<<"Anzahl der Studenten: "<<uni_1.getNumStudents()<<endl;
	uni_1.graduate();
	cout<<"Anzahl der Studenten: "<<uni_1.getNumStudents()<<endl;
	uni_1.setNumStudents(0);
	cout<<"Anzahl der Studenten: "<<uni_1.getNumStudents()<<endl;

	int n;
	cout<<"Anzahl der neuen Studenten"<<endl;
	cin>>n;
	for(int i = 1;i<=n;i++) {
		uni_1.newStudent();
	}
	cout<<"Anzahl der Studenten: "<<uni_1.getNumStudents()<<endl;
	cout<<"Anzahl der Studenten nach der Abschlusszeremonie"<<endl;
	cin>>n;
	for(int i = 1;i<=n;i++) {
		uni_1.graduate();
	}
	cout<<"Anzahl der Studenten: "<<uni_1.getNumStudents()<<endl;

}




/*




*/