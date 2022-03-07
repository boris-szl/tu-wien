void minsort(int vector[], int n) {
  int j = 0;
  int k = 0;
  int argmin = 0;
  double tmp = 0;

  for (j=0; j<n-1; j++) {
    argmin = j;
    for (k=j+1; k<n; k++) {
      if (vector[argmin] > vector[k]) {
        argmin = k;
      }
    }
    if (argmin > j) {
      tmp = vector[argmin];
      vector[argmin] = vector[j];
      vector[j] = tmp;
    }
  }
}
