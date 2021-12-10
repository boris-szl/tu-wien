#include "kunde.hpp"


using std::cin;
using std::cout;
using std::endl;


int main() {
	Customer customer_1("Galaktus", 2000.00);
	Customer customer_2("Thor", 1322.00);


	cout<<"Kundenname: "<<customer_1.getName()<<endl;
	cout<<"Kunden PIN: "<<customer_1.getPin()<<endl;
	cout<<"Saldo des Kunden: "<<customer_1.getBalance()<<endl;
	customer_1.drawMoney(150);
	cout<<customer_1.getBalance()<<endl;

	Customer customer_3;

	return 0;
}

/* More precise testing needed


*/