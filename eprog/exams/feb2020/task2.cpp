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
    double& operator[](int);
    const double& operator[](int) const;

    double& operator()(int);
    const double& operator()(int) const;

    double max() const;
    void sort();
    void unique();
    void cut(double Cmin, double Cmax);
    void resize(double int, double init);
    void print();

};

Vector::Vector(int n, double init) {
    assert(n >= 0);
    this->n = n;
    coeff = new double[n];
    assert(coeff != (double*) 0);
    for (int i=0;i<n;++i) {
        coeff[i] = init;
    }
}

Vector::~Vector() {
    if (n > 0) {
        delete[] coeff;
    }
}

void Vector::print() {
    for (int i = 0;i<n;++i) {
        std::cout << coeff[i] << " ";
    }
    std::cout<<std::endl;
}

Vector& Vector::operator=(const Vector& rhs) {
    if (this != &rhs) {
        if (n != rhs.n) {
            if (n > 0) {
                delete[] coeff;
            }
            n = rhs.n;
            if (n > 0) {
                coeff = new double[n];
            } else {
                coeff = (double*) 0;
            }
        }
        for (int j=0; j<n; ++j) {
            coeff[j] = rhs[j];
        }
    }
    return *this;
}

const double& Vector::operator[](int k) const {
    assert(k>=0 && k<n);
    return coeff[k];
}

double& Vector::operator[](int k) {
    assert(k>=0 && k<n);
    return coeff[k];
}


const double& Vector::operator()(int k) const {
    assert(k>=0 && k<n);
    return coeff[k];
}

double& Vector::operator()(int k) {
    assert(k>=0 && k<n);
    return coeff[k];
}

int Vector::size() const {
    return n;
}

std::ostream& operator<<(std::ostream& output, const Vector& x) {
    output << "(";
    for (int j=0;j<x.size(); ++j) {
        output << x[j];
        if ( j < x.size()-1 ) {
            output <<  ", ";
        } 
    }
    return output << ")" << std::endl;
}

double Vector::max() const {
    double max = coeff[0];
    for (int j = 0; j < n; ++j) {
        if ( coeff[j] > max ) {
            max = coeff[j];
        }
    }
    return max;
}


void Vector::sort() {
    int idx = 0;
    for (int j = idx; j < n; ++j) {
        for (int k = idx; k < n-1; ++k) {
            if ( coeff[k] > coeff[k+1] ) {
                int tmp = coeff[k+1];
                coeff[k+1] = coeff[k];
                coeff[k] = tmp;
            }
        }
    }
}


void Vector::resize(int dim, int init){ 
    coeff = realloc(coeff,dim*sizeof(double*));
    for (int j = n-1; j < dim; ++j) {
        coeff[j] = init;
    }
    coeff.sort();
}

int main() {
    // wir legen ein Object an
    Vector a(10);
    a(1) = 100;
    a(4) = 32; 
    a(8) = 102;
    std::cout<<a;
    std::cout<<std::endl;
    std::cout<<"Max von a = "<<a.max()<<std::endl;
    std::cout<<"Unsorted a = "<<a;
    a.sort();
    std::cout<<"Sorted a = "<<a;

}
