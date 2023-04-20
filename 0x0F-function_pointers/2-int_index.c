#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer in an array
 * @array: input array
 * @size: number of elements in array
 * @cmp: pointer to function
 * Return: the index of first element in cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (1);
	}
	return (-1);
}	

