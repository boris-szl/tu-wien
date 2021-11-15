#include <stdio.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 10/11/2021

int binomial(int n, int k);
int factorial(int n);
unsigned long binomial2(unsigned int n, unsigned int k);



int main() {
	int n,k;
	printf("Eingabe von n und k, mit n >= k:\n");
	scanf("%d %d", &n,&k);
	// Bedingungschleife dafür, dass k <= n bzw. n >= k und positive Zahlen
	while (k > n || k < 0 || n < 0) {
		printf("Eingabe ungültig. n muss grösser gleich k sein und \n");
		printf("beide Werte müssen positiv sein\n");
		scanf("%d %d", &n,&k);
	}
	printf("%d\n", binomial(n,k));
	printf("%lu\n", binomial2(n,k));

}

int binomial(int n, int k) {
	int zaehler = 1;
	int nenner = 1;
	for(int i= 0; i < k; i++) {
		zaehler *= n - i;
		nenner *= k - i;
	}
	return zaehler / nenner;
}


unsigned long binomial2(unsigned int n, unsigned int k) {
	unsigned long zaehler = 1;
	unsigned long nenner = 1;
	for(unsigned int i = 0; i < k; i++) {
		zaehler *= n - i;
	}
	for (unsigned int i = 0; i < k; i++) {
		nenner *= k - i;
	}
	return zaehler / nenner;
}


unsigned long factorial(unsigned int n) {
	res = 1;
	for (int i;i<n;i++) {
		res *= res * i
	}
}



// Testing TR-30X Pro und https://www.omnicalculator.com/math/binomial-coefficient
// Für die Funktion binomial mit nur einer Schleife
// 0 über 0 -> 1 im TR und n and k must be positive im Omnicalculator
// 1 über 1 && 8 über 8 = 1
// 8 über 2 = 28
// 12 über 4 = 495
// 20 über 4 = 4'845
// 25 über 15 = 3'268'760
// 36 über 10 = für int liegt die zahl nicht mehr im Wertebereich, 
	// für unsigned long int = 254'186'856




