#include "struct_vector.h"

Vector* newVector(int n) {
  int i = 0;
  Vector* X = NULL; // Deklarieren einen pointer X auf Variablentyp Vector, init Null
  assert(n > 0); // wir stellen sicher, dass n > 0, sonst Abbruch
  
  // Wir allokieren Speicher für die Struktur
  X = malloc(sizeof(Vector));
  assert(X != NULL);
  
  X->n = n; // Wir schreiben in X die länge n ein
  X->entry = malloc(n*sizeof(double)); // legen Speicher für Entry fest 
  assert(X->entry != NULL);
  
  for (i=0; i<n; ++i) {
    X->entry[i];
  }
  return X;
}

Vector* delVector(Vector* X) {
  assert(X != NULL);
  free(X->entry);
  free(X);
  
  return NULL;
}

int getVectorN(Vector* X) {
  assert(X != NULL);
  return X->n;
}

double getVectorEntry(Vector* X, int i) {
  assert(X != NULL);
  assert((i >= 0) && (i < X->n));
  return X->entry[i];
}

void setVectorEntry(Vector* X, int i, double Xi){
  assert(X != NULL);
  assert((i >= 0) && (i < X->n));
  X->entry[i] = Xi;
}

Vector* inputVector() {
  
  Vector* X = NULL;
  int i = 0;
  int n = 0;
  double input = 0;
  
  printf("Length of the vector n=");
  scanf("%d",&n);
  assert(n > 0);
  
  X = newVector(n);
  assert(X != NULL);
  
  for (i=0; i<n; ++i) {
    input = 0;
    printf("x[%d]=",i);
    scanf("%lf",&input);
    setVectorEntry(X,i,input);
  }
  
  return X;
}

double normVector(Vector* X) {
  
  double Xi = 0;
  double norm = 0;
  int n = 0;
  int i = 0;
  
  assert(X != NULL);
 
  n = getVectorN(X);

  for (i=0; i<n; ++i) {
    Xi = getVectorEntry(X,i);
    norm = norm + Xi*Xi;
  }
  norm = sqrt(norm);
  
  return norm;
}

double productVector(Vector* X, Vector* Y) {
  
  double Xi = 0;
  double Yi = 0;
  double product = 0;
  int n = 0;
  int i = 0;

  assert(X != NULL);
  assert(Y != NULL);
  
  n = getVectorN(X);
  assert(n == getVectorN(Y));
  
  for (i=0; i<n; ++i) {
    Xi = getVectorEntry(X,i);
    Yi = getVectorEntry(Y,i);
    product = product + Xi*Yi;
  }
  
  return product;

}












