#include <stdio.h>
#include <math.h>
#include <assert.h>

// Author: Szelcsanyi Boris
// Datte: 04.11.2020
// Last updated: 05.11.2020


// Input: beliebiges x
// Output: nat. Z. "k"
// Condittion: k <= sqrt(x) <= k + 1
// kein sqrt(x)


// Wir definieren eine Funktion zur Ermittlung der Wurzel einer beliebigen Zahl x
// gemäss dem Heron-Verfahren (Babylonian Method)
// babylonian method aka. heron verfahren for finding sqrt
// Heron-Verfahren, Heronsche Näherungsverfahren oder babylonische Wurzelziehen ist ein Rechenverfahren 
// zur Berechnung einer Näherung der Quadratwurzel einer reellen Zahl a>0.
// Wiki: https://de.wikipedia.org/wiki/Heron-Verfahren
// source: https://stackoverflow.com/questions/19611198/finding-square-root-without-using-sqrt-function/40528142

double wurzel(double x) {
	assert(x >= 0); // Assertbedidingung für x >= 0;
	double precision = 10e-8;
	double s = x;

	while ( (s - x / s) > precision ) { //loop until precision satisfied 
		s = (s + x / s) / 2;
	}
	return s;
}

int wurzelschranke(double x) {
	int k = 0; // Iniitali	sierung von null, da sonst garbage
	while (k <= wurzel(x)) { // solange k kleiner gleich die wurzel(x) ist
		k++; // postinkrementiert k, d.h. als erster auswerten, dann erhöhen
		if (wurzel(x) < k+1) { // sobald k+1 strikt grösser als wurzel(x) ist
			break; // folgt break
		}
	}
	return k; // Rückgabe wert int k
}

int main() {
	double x;
	printf("Eingabe einer beliebgen Zahl 'x'\n");
	scanf("%lf", &x);
	printf("Wurzel von %f = %f\n", x, wurzel(x));
	printf("Wurzelschranke von %f =  %d\n", x, wurzelschranke(x)); // output ist nat. Z. d.h. positive int only
}

// Testing


// (2) Test der Wurzelfunktion
// Für 4, 16, 81, 324
// Output: 2, 4, 9, 18

// grössere Zahlen = {1234, 24532, 600000, 7200000}
// wurzel grössere Zaheln = {35.128336, 156.626945, 774.596669241, 2683.281573}

//(2) Test der Schranke
// Input nat. Zahlen: 32, 18, 81, 1234, 24532
// Input reelle Zahlen: 15.2, 36.5, 99.99
// Unter der Bedingung / Vorschrift k <= wurzel(x) <= k + 1
// folgt für die Inputwerte folgende Outputwerte = {5, 4, 9, 35, 156}
// Output reelle Inputwerte = {3, 6, 9}


// Sonderfall: 0
// Für die Ermittlung der Wurzelschranke 0 unter der Bedingung folgt 1.
// Warum? Die Wurzel aus 0 ist 0 und null ist keine nat. Zahl
// Unter der Bedingung k <= wurzel(0) < k+1 hinsichtlich wurzel(0)
// kann k nicht kleiner als 0 sein, weil dann k dann k keine nat. Z ist
// k kann auch nicht gleich 0 sein, weil 0 nicht in der Menge der nat. Zahlen enthalten ist
// Daraus folgt, dass die Wurzelschranke 1 ist.

// Wie könnte man das Problem lösen
// Anpassen der Bedingung: k < wurzel(x) < k+1
// Überprüfung Probiere (1) und (2)
// oder if Bedingung einbauen







