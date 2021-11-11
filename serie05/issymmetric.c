#include <stdio.h> 

// Author: Boris Szelcsanyi
// Date created: 11/11/2021
// Last updated: 11/11/2021

// Deklaration FK mit Parametern
void scanMatrix(int m, int n, double matrix[m][n]);
int issymmetric(int m, int n, double matrix[m][n]);

int main() {

	int i,j;
	int n,m;
	double A[10][10];
	printf("Einlesen der Anzahl der Zeilen m, Spalten m:\n");
    scanf("%d %d",&m,&n);
    scanMatrix(m,n,A);
    printf("%d\n", issymmetric(m,n,A));

}

void scanMatrix(int m, int n, double matrix[m][n]) {
	int i,j;
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			scanf("%lf", &matrix[i][j]);
		}
	}
}

int issymmetric(int m, int n, double matrix[m][n]) {
	int i,j;
	// Deklaration und Initialisierung der Zählvariable
	int count_j = 0;
	int count_i = 0;

	for (i=0;i<n;i++) {
		count_i += 1;
	}
	for (j=0;j<m;j++) {
		count_j += 1;
	}
	// Bedingung das die Anzahl der Zeilen gleich der Spalten ist
	if (count_i == count_j) {
		return 1;
	} else {
		return 0;
	}
}

// Testing
// 2x3 -> Rückgabewert 0
// 2x2 -> Rückgabewert 1
// 5x4 -> Rückgabewert 0
// 6x6 -> Rückgabwert 1
// 10x10 -> Rückgabewert 1
