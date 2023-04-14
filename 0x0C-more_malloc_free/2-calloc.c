#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of members of the array
 * @size: number of bytes per member
 *
 * Return: Pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *arr;

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

