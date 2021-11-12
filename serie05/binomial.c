#include <stdio.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 10/11/2021

int binomial(int n, int k);
int binomial2(int n, int k);


int main() {
	int n,k;
	printf("Eingabe von n und k, mit n >= k:\n");
	scanf("%d %d", &n,&k);
	while (k > n || k < 0 || n < 0) {
		printf("Eingabe ungültig. n muss grösser gleich k sein und \n");
		printf("beide Werte müssen positiv sein\n");
		scanf("%d %d", &n,&k);
	}
	printf("%d\n", binomial(n,k));

}

int binomial(int n, int k) {
	int i;
	double res = 1;
	for (i=1;i<=k;++i)
		res = res * (n - k + i) / i;
	return (int)(res + 0.01);

}

// Testing TR-30X Pro und https://www.omnicalculator.com/math/binomial-coefficient
// Für die Funktion binomial mit nur einer Schleife
// 8 über 2
// 1 über 1
// 8 über 8
// 20 über 4
// 36 über 10