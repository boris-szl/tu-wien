#ifndef INCLUDE_DYNAMICVECTORS__
#define INCLUDE_DYNAMICVECTORS__

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


// allokation + initialisierung eines dynamischen double vektors der länge n
double* mallocVector(int n);

// auflösen des dynamischen vektors und festlegen des pointers auf NULL
double* freeVector(int n);

// erweitern des dynamsichen vektors und initialisierung neuer einträge (koeffizienten)
double* reallocVector(double* vector, int n, int nnew);

// einlesen der vektorkoeffizienten
// durch Tastatureingabe
double* scanVector(int n);

// print dynamic double vector
void printVector(double* vector, int n);

#endif