#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zeilensumme(int m, int n, double matrix[m][n]);


int main() {

	int m,n,row,col, sum = 0, row_ind = 0, col_ind = 0;
    printf("Einlesen der Anzahl der Zeilen m, Spalten m:\n");
    scanf("%d %d",&m,&n);
    int row_arr[m];
	int i,j;
    double mat[m][n];
    printf("Einlese der Werte für die Mattrix[%d][%d]:\n", m,n);
    for (i=0;i<m;i++) {
    	for (j=0;j<n;j++) {
    		scanf("%lf",&mat[i][j]);
    	}
    }
    int z = 0; // Länge der Zeilenvektors row_arr[z]
    printf("Summe der jeweiligen Zeile der Matrix: ");
	zeilensumme(m,n,mat);

}

void zeilensumme(int m, int n, double matrix[m][n]) {
	int i,j;
	double sum;
	int z = 0;
	double row_arr[m];
	// Zeilensumme berechenen und ausgeben
    // Iteriert über jeder Zeile der Matrix und summiert die Werte
    // Weist die Summe jeder Zeile einem 1-dim Vektor zu, wobei die
    // die Länge des Vektor mit jeder Iteration inkrementiert
	for(i=0;i<m;i++) {
		sum = 0;
		for(j=0;j<n;j++) {
			sum += fabs(matrix[i][j]);
		}
		printf("%.2f ", sum);
		row_arr[z++] = sum;
	}
	printf("\n");

	// Maximum der Zeilensumme in der Matrix
	// Einfacher Max-Algo
	int row_ind = 0;
	double temp_row = row_arr[0]; // Falls der 0-te Zeilensumme die grösste ist
	for (i=0;i<n;i++) {
		if(temp_row < row_arr[i]) {
			temp_row = row_arr[i];
			row_ind = i;
		}
	}
	printf("Das Maximum der Zeilensumme der Matrix ergibt sich aus der %d-ten Zeile\n", row_ind);
	printf("Das Maxmimum beträgt %f\n",temp_row);
}

// Testing
// Sei A eine 2x3 Matrix mit {{1,-2,3}, {4,5,-6}}
// Sei A eine 5x5 Matrix mit {{-5,-5,-5,-5,-5}, {-5,5,5,5,5},...}
// Sei A eine 10x10 Matrix mit {{...}} (vgl. Abbildung)



