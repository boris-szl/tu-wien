#include <stdio.h>
#include <stdlib.h>


#define INITIAL_NUM_ROWS 5
#define REALLOC_NUM_COLS 8
#define REALLOC_NUM_ROWS 10
#define REALLOC_NUM_COLS 16



int main() {
	int** test_matrix = malloc(INITIAL_NUM_ROWS*sizeof(int))

	int col_count = 0;
	int row_count = INITIAL_NUM_ROWS;
	while (row_count--) {
		test_matrix[row_count] = malloc(INITIAL_NUM_ROWS*sizeof(int));
	}
}