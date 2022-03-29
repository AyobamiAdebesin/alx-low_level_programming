#include "main.h"
/**
 * print_diagsums - Print the diagonal sums of a matrix
 * @a: The matrix
 * @n: The size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size )
{
	int row;
	int col;
	int left_trace;
	int right_trace;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
			{
				left_trace += a[row][col];
			}
			if ((col + row) == size - 1)
			{
				right_trace += a[row][col];
			}
		}
	}
	printf("%d, %d", left_trace, right_trace);
}
