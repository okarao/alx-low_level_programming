#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: the reversed integers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	*a = (*b);
	*b = temp;
}
