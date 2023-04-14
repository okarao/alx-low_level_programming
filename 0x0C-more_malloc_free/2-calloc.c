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

	arr = (int *)malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}

