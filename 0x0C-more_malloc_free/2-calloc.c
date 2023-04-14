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
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = (int *)malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}

