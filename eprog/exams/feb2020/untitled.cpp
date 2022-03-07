
void SortedVector::sort() {
    int idx=0;
    for (int j = idx; j < n; ++j) {
        for (int k = idx; k < n-1; ++k) {
            if ( entries[k] > entries[k+1] ) {
                int tmp = entries[k+1];
                entries[k+1] = entries[k];
                entries[k] = tmp;
            }
        }
    }
}


void SortedVector::resize(int dim, int init){ 
    coeff = realloc(coeff,dim*sizeof(double))
    for (int j = this->dim-1; j < dim; ++j) {
        coeff[j] = init;
    }
    coeff.sort();
}