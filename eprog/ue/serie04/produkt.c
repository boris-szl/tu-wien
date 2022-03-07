#include <stdio.h>

// Author: Szelcsanyi Boris
// Last updated: 11/03/2021

// input: zwei beliebige nat. Zahlen n
// output: produkt beider nat. Zahlen

int product(int x, int y) {
	// 2 + 2 + 2 + 2 + 2 = ist die Summe dieser Zahlenfolge über eine Index 
	// wobei die Summationsgrenze die Anzahl der aufsummierenden Zahlen ist.
	// Wir deklarieren den Platzhalter Produkt und Count.
	int product, count;
	while (count < y) {
		product += x;
		count += 1;
	}
	return product;
}

int main() {
	// Variable x und y deklarieren
	int x;
	int y;
	// Einlesen der zwei beliebigen nat. Zahlen durch die Tastatur
	printf("Eingabe von x,y:\n");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d\n", product(x,y));
}

// Testing
// Wir testen die Funktion für kleine Multiplikationen
// Input: z.B. 2*2, 4*3, 8*6, 9*9
// Output: 4, 12, 48, 81

// Wir testen für grosse Zahlen
// Input: 100*100, 1000*30, 4213*14
// Output: 1000, 30000, 58982

// Auch wenn es nat. Zahlen sind. Wir probieren trotzdem für negative Zahlen
// a) Einmal minus x und plus y / plus x und minus y
// Input: -2*2, -4*3, 8*-6, 9*-9
// Output: -4, -12, 0, 0

// b) Beide Eingabewerte sind negativ
// Input: -2*-2, -4*-3, ... , -x * -y
// Output: 0, 0, ... , 0






