void MVM(double A[], double x[], double b[],
         int m, int n) {
  int i = 0;
  int j = 0;

  for (j=0; j<m; j++) {
    b[j] = 0;
    for (k=0; k<n; k++) {
      b[j] = b[j] + A[j+k*m]*x[k];
    }
  }
}
