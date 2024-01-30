#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the
 * two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix.
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
