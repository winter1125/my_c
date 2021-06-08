#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b)(((a)>(b))? (a): (b))
#define MAX_DEGREE 101
#define ROWS 3
#define COLS 3

void matrix_t(int A[ROWS][COLS], int B[ROWS][COLS])
{
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			B[c][r] = A[r][c];
}

void matrix_p(int A[ROWS][COLS])
{
	printf("===================\n");
	for (int r = 0; r < ROWS; r++) {
		for(int c=0; c<ROWS;c++)
		printf("%d ", A[r][c]);
		printf("\n");
	}
	printf("==================\n");
}


int main(void)
{
	int array1[ROWS][COLS] = { {2,3,0},{8,9,1},{7,0,5} };
	int array2[ROWS][COLS];
	

	matrix_t(array1, array2);
	matrix_p(array1);
	matrix_p(array2);
	return 0;
}
