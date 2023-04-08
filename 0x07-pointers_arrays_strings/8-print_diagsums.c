#include "main.h"

/**
 * print_diagsums - print sum of diagonals of an array
 * @a: array of integers
 * @size: number of elements in array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag1sum, diag2sum;

	diag1sum = diag2sum = 0;
	for (i = 0; i <= (size * size); i += size + 1)
	{
		diag1sum += a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j += size -1)
	{
		diag2sum += a[j];
	}
	printf("%d, %d\n", diag1sum, diag2sum);
}
