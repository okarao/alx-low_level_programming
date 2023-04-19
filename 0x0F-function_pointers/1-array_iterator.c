#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iteration - calls back a function to iterate an array
 * @array: input array
 * @size: the size of array
 * @action: called back function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}
