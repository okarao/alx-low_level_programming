#include "main.h"

/**
 * print_array -  print n elements of an array
 * @a: integer array
 * @n: number of elements to be printed
 * Return: n array elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
