#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Author: Boris Szelcsanyi
// Date created: 10/11/2021
// Last updated. 14/11/2021

void zeilensumme(int m, int n, double matrix[m][n]);
double zeilensummennorm(int m, int n, double matrix[m][n]);

int main() {

	int m,n;
	int j,k;
    printf("Einlesen der Anzahl der Zeilen m und Spalten n:\n");
    scanf("%d %d",&m,&n);
    double A[m][n];
    printf("Einlesen der Werte für die Mattrix[%d][%d]:\n", m,n);
    for (j=0;j<m;j++) {
    	for (k=0;k<n;k++) {
    		printf("Matrix[%d][%d] = ",j,k);
    		scanf("%lf",&A[j][k]);
    	}
    }
    int z = 0; // Länge der Zeilenvektors row_arr[z]
    printf("Zeilnesummennorm:\n");
	printf("%f\n", zeilensummennorm(m,n,A));

}

double zeilensummennorm(int m, int n, double matrix[m][n]) {
	int i,j;
	double sum;
	double max_sum = 0;
	for (i=0;i<m;i++) {
		sum = 0;
		for(j=0;j<n;j++) {
			sum += fabs(matrix[i][j]);
		}
		if (sum > max_sum) {
			max_sum = sum;
		}
	}
	return max_sum;
}



// Testing
// Case 1: Sei A eine 2x3 Matrix mit {{1,-2,3}, {4,5,-6}}
 // Desired output: 15
// Case 2: Sei A eine 3x2 Matrix mit {{1,-2},{77,-12},{23,-50}}
 // Desired output: 89
// Case 3: Sei A eine quadratische Matrix {{12,-12,14}{12,-31,34},{1,1,1}}
 // Desired output: 77


// Für n = m = 10^4 = 10'000 braucht es 0.1 Sekunden
// n = m gilt ein quadratischer Aufwand d.h O(n^2)
// Für n = m = n^2 = 30^2 = 900 * 0.1 = 90 Sekunden = 1 1/2 Minuten



