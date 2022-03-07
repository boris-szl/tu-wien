#ifndef INCLUDE_SYMMETRIC_MATRIX__
#define INCLUDE_SYMMETRIC_MATRIX__

#include "matrix.hpp"

class SymmetricMatrix : public Matrix
{
public:
    // Standardkonstruktor
    SymmetricMatrix();
    // Parametisierter Konstruktor (Konstruktor mit Parametern)
    SymmetricMatrix(int n, double init = 0.0);
    // Default Destruktor
    ~SymmetricMatrix();

    SymmetricMatrix(const SymmetricMatrix& rhs);
    SymmetricMatrix(const Matrix& rhs); // Cast Matrix -> SymmetricMatrix
    SymmetricMatrix& operator=(const SymmetricMatrix& rhs);

    // Schreiben und Lesen der Matrixkoeffizienten
    double get(int i, int j) const;
    void set(int i, int j, double value);

    void printMatrix() const;
    bool isSymmetric() const;

};

#endif
