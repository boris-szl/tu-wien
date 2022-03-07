int binsearch(int vector[], int value, int n) {

  int j = 0;
  int start = 0;
  int end = n-1;

  while (start <= end) {
    j = 0.5*(end + start);
    if (vector[j] == value) {
      return j;
    }
    else if (vector[j] > value) {
      end = j-1;
    }
    else {
      start = j+1;
    }
  }

  return -1;
}
