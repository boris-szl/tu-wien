#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iostream>

class Vector {
private:
    int n;
    double* coeff;
public:
    Vector(int, double = 0);
    Vector(const Vector&);
    ~Vector();
    Vector& operator=(const Vector&);

    int size() const;
    double& operator()(int);
    const double& operator()(int) const;

    double max() const;
    void sort();
    void unique();
    void cut(double Cmin, double Cmax);

    void print();

};

Vector::Vector(int n, double init) {
    assert(n >= 0);
    this->n = n;s
    coeff = new double[n];
    assert(coeff != (double*) 0);
    for (int i=0;i<n;++i) {
        coeff[i] = init;
    }
}

Vector::~Vector() {
    if (n > 0) {
        delete [] coeff;
    }
}

void Vector::print() {
    for (int i = 0;i<n;++i) {
        std::cout << coeff[i] << std::endl;
    }
}

Vector& Vector::Vector operator=(const Vector& rhs) {
    if (this != &rhs) {
        if (n != rhs.dim) {
            if (n > 0)
        }
    }
}

int main() {
    // wir legen ein Object an
    Vector a(10);
    a.print();


    return 0;
}
