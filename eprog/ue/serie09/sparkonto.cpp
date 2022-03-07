#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cassert>

#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

class SparKonto {
private:
	int kontonummer;
	double guthaben;
	double zinssatz;
public:
	// constructor and desctructor
	SparKonto() {
		cout<<"Konto angelegt"<<endl;
	}
	// member access via methods
	// get methods
	int getKontonummer();
	double getZinssatz();
	double getGuthaben();

	// get methods
	void setZinssatz(double);
	void setKontonummer();	

	// withdraw and deposit
	void abheben(double);
	void einzahlen(double);

	// calculate interest
	double berechneGuthaben();

};

int SparKonto::getKontonummer() {
	return kontonummer;
}

double SparKonto::getGuthaben() {
	return guthaben;
}

double SparKonto::getZinssatz() {
	return zinssatz;
}

void SparKonto::setZinssatz(double zinssatz) {
	assert(zinssatz > 0);
	this->zinssatz = zinssatz;
}

void SparKonto::setKontonummer() {
	int rand_number;
	rand_number = rand() % 10000 + 80000;
	this->kontonummer = rand_number;
}

void SparKonto::abheben(double amount) {
	assert(guthaben > 0);
	this->guthaben -= amount;
}

void SparKonto::einzahlen(double amount) {
	assert(amount > 0);
	this->guthaben += amount;
}

double SparKonto::berechneGuthaben() {
	return guthaben * (1+zinssatz);
}

int main() {


	SparKonto heinz;
	SparKonto carla;

	heinz.setKontonummer();
	cout<<"Kontonummer: "<<heinz.getKontonummer()<<endl;
	cout<<"Das derzeitige Guthaben beträgt: € "<<heinz.getGuthaben()<<endl;
	cout<<"Der Zinssatz beträgt: "<<heinz.getZinssatz()*100<<"%"<<endl;
	heinz.setZinssatz(0.03);
	cout<<"Der neue Zinssatz beträgt: "<<heinz.getZinssatz()*100<<"%"<<endl;

	// cout<<"Kontonummer: "<<carla.getKontonummer()<<endl;
	// carla.setKontonummer();
	// cout<<"Kontonummer: "<<carla.getKontonummer()<<endl;

	// Withdrawal and deposit
	// Heinz hat eine Million Euro im Lotto gewonnen und zahlt sein Zaster ein
	heinz.einzahlen(1000000);
	cout<<"Das neue Guthaben beträgt: "<<heinz.getGuthaben()<<endl;
	// Heinz fährt ist seit seiner Jugend ein passionierter Rennradfahrer
	// sein Traum war es schon immer ein BIANCHI Rad zu besitzen
	// Dieser kostet ihm 5'439,99 EUR, somit hebt Heinz Geld ab.
	heinz.abheben(5439.94);
	cout<<"Das neue Guthaben beträgt: "<<heinz.getGuthaben()<<endl;
	heinz.abheben(450);
	cout<<"Das neue Guthaben beträgt: "<<heinz.getGuthaben()<<endl;

	// berechne verzinste Guthaben
	cout<<"Verzinste Guuthaben berägt: "<<heinz.berechneGuthaben()<<endl;

	return 0;

}

/* Testing

*) negativer Zins
*) negatives Guthaben
*) negative Kontonummer

Quellen: 

https://www.cplusplus.com/reference/cstdlib/rand/

*/
