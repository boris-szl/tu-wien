/*
 * Aufgabe 7.4
 * Peter Smek, 21.11.2021
 */

#include <assert.h>
#include <stdio.h>

#include "matrix.h"

int main() {
    // Get user input for matrix size.
    int m = 0, n = 0;
    do {
        printf("m = ");
        scanf("%d", &m);
    } while (m <= 0);
    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n <= 0);

    // Create matrix.
    Matrix *matrix = newMatrix(m, n);
    Matrix *shallowCopyMatrix = shallowCopy(matrix);
    Matrix *deepCopyMatrix = deepCopy(matrix);

    // Tests.
    assert(getMatrixM(matrix) == m);
    assert(getMatrixN(matrix) == n);
    setMatrixEntry(matrix, 0, 0, -2352.2);
    assert(getMatrixEntry(matrix, 0, 0) == -2352.2);
    assert(getMatrixEntry(shallowCopyMatrix, 0, 0) == -2352.2);
    assert(getMatrixEntry(deepCopyMatrix, 0, 0) == 0);

    printf("Matrix:\n");
    printMatrix(matrix);

    printf("\nShallow copy of Matrix:\n");
    printMatrix(shallowCopyMatrix);

    printf("\nDeep copy of Matrix:\n");
    printMatrix(deepCopyMatrix);

    // Delete matrix.
    delMatrix(matrix);
    delMatrix(deepCopyMatrix);

    return 0;
}