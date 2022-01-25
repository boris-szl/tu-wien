#include <cstdlib>
#include <cassert>
#include <cmath>
#include <iostream>


using std::cin;
using std::cout;
using std::endl;


int binomial(int n, int k) {
    if (k == 1)
        return n;
    if (n == k)
        return 1;
    return binomial(n-1,k-1) + binomial(n-1,k);
}

int main() {
    cout << binomial(4,2) << endl;
    cout << binomial(7,3) << endl;
    cout << binomial(1,1) << endl;
}

