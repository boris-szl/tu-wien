double maximum(double vector[], int n) {
  int i = 0;
  double max = 0;
  
  max = vector[0];
  for (i=1; i<n; i++) {
    if (vector[i] > max) {
      max = vector[i];
    }
  }
  
  return max;
}
