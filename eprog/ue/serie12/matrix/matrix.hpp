#ifndef INCLUDE_MATRIX__
#define INCLUDE_MATRIX__

#include <iostream>

#include "vector.hpp"

class SymmetricMatrix;
class DiagonalMatrix;

class Matrix {
protected:
    int n;
    double *coeff;

public:
    Matrix();
    Matrix(int n, double init = 0.0);
    ~Matrix();

    Matrix(const Matrix& rhs);
    // Child Datentyp in Parent Datentyp umwandeln, wobei Parameter eine konstante Referenz ist
    Matrix(const SymmetricMatrix& rhs); // Cast SymmetricMatrix -> Matrix
    Matrix(const DiagonalMatrix& rhs); // Cast DiagonalMatrix -> Matrix
    Matrix& operator=(const Matrix& rhs);

    Matrix(int n, double lb, double ub);

    // Rückageb der Matrixdimension
    int size() const;

    // Schreiben und Lesen der Einträge 
    double get(int i, int j) const;
    void set(int i, int j, double value);

    // Matrix-Vektorprodukt
    Vector multiplyLeft(Vector& x) const;
    // Vector-Matrixprodukt
    Vector multiplyRight(Vector& x) const;

    void scanMatrix(int n);
    void printMatrix() const;
    double trace() const;

    double columnSumNorm() const;
    double rowSumNorm() const;
    double frobeniusNorm() const;
    double maxNorm() const;

    // Determinante bestimmen
    double det() const;

    bool isDiagonal() const;
    bool isSymmetric() const;
    bool isSkewSymmetric() const;

    // Unärer Operator - (UE 12.1)
    const Matrix operator-() const;

    // Matrix transporieren  (UE 12.3)
    const Matrix operator~() const;
};

// Matrixaddition UE 12.1
const Matrix operator+(const Matrix& A, const Matrix& B);

// Matrixsubtraktion UE 12.1
const Matrix operator-(const Matrix& A, const Matrix& B);

// Matrix-Matrix Multplikation UE 12.1
const Matrix operator*(const Matrix& A, const Matrix& B);

// Matrix-Vector Multiplikation UE 12.3
const Vector operator*(const Matrix& A, const Vector& x);

// Matrix-Scalar Multiplikation UE 12.3
const Matrix operator*(const Matrix& A, const double s);

// Scalar-Matrix Multiplikation UE 12.3
const Matrix operator*(const double s, const Matrix& A);

// Überladen des Operators "<<" UE 12.4
std::ostream& operator<<(std::ostream& output, const Matrix& x);

#endif