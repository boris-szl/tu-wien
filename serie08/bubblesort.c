#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>


/*

Aufgabe 8.8. 

Schreiben Sie eine Funktion void bubbleSort(double* x, int n),
 die einen Vektor x ∈ Rn mittels des Bubblesort-Algorithmus aufsteigend sortiert: 
 Beginnend mit j = 1 vergleicht man aufsteigend jedes Element xj 
 eines Arrays mit seinem Nachfolger xj+1 und – falls notwendig, 
 d.h. falls xj > xj+1 – vertauscht die beiden. 
 Nach dem ersten Durchlauf muss zumindest das letzte Element bereits am richtigen Platz sein. 
 Der nächste Durchlauf muss also nur noch bis zur vorletzten Stelle gehen, usw.
  Wie viele geschachtelte Schleifen braucht dieses Vorgehen? 
 Arbeiten Sie mit dynamischer Speicherverwaltung! Schreiben Sie ein aufrufendes Hauptprogramm, 
 in dem die Vektorla ̈nge n und der Vektor x ∈ Rn eingelesen werden und die zwei Vektoren
(der Input Vektor und das Ergebnis der Funktion) ausgegeben werden. 
 Speichern Sie den Source-Code unter bubblesort.c in das Verzeichnis serie08.
*/

/*

Bubble sort is a simple sorting algorithm that works in O(n2) time. 
The algo- rithm consists of n rounds, and on each round, 
it iterates through the elements of the array. 
Whenever two consecutive elements are found that are in wrong or- der, 
the algorithm swaps them.

After the first round of bubble sort, 
the largest element will be in the correct position, 
and more generally, after k rounds, 
the k largest elements will be in the correct positions.
Thus, after n rounds, the whole array will be sorted.


*/
double* scanVector(int n) {
    int j = 0;
    double* vector = NULL;
    vector = malloc(n*sizeof(double));
    assert(n > 0);
    assert(vector != NULL);
    for(j=0;j<n;j++) {
        vector[j] = 0;
        printf("Vector[%d] = ",j);
        scanf("%lf", &vector[j]); 
     }
     return vector;
}


void bubblesort(double* x, int n) {
    assert(x != NULL);
    assert(n > 0);
    double tmp; // sammelvariable für den tausch
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<n-1;j++) {
            if (x[j] > x[j+1]) {
                tmp = x[j]; // 
                x[j] = x[j+1];
                x[j+1] = tmp;
            }
        }
    }
}

void printVector(double* x, int n) {
    int j = 0;
    // ensure that vector and length are admissible
    assert(x != NULL);
    assert(n > 0);

    for (j=0;j<n;j++) {
        printf("vector[%d] = %.2f\n", j, x[j]);
    }

}

int main() {

    // pointer auf null setzen
    double* vector = NULL;
    int n;

    printf("dim = ");
    scanf("%d", &n);

    // vector allokieren, einlesen der koeffizienten
    vector = scanVector(n);

    // ausgabe des Vektors vor der bubblesort Funktion
    printVector(vector, n);

    // aufrufen der funktion bubble sort
    bubblesort(vector, n);

    // ausgabe der koeffizienten nach bubble sort
    printVector(vector, n);

    free(vector);
    vector = NULL;
}



/* Testing
Complexity / Aufwand O(n^2)

Vektor mit pos. Koeff und n = 8
vector = [1,3,8,10,9,2,5,6]
Desired output = [1,2,,3,5,6,8,9,10]

Vektor mit neg. Koeff und n = 8
vector = [-1,-2,-4-,0,1,5,3,4]

Vektor mit zwei gleichen Koeff und n = 9
vector = [1,2,3,2,2,4,7,6,5] 
Desired output = []


*/

