int search(int vector[], int value, int n) {

  int j = 0;
  
  for (j=0; j<n; j++) {
    if (vector[j] == value) {
      return j;
    }
  }

  return -1;
}
