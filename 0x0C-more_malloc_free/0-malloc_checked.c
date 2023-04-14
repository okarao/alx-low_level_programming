#include "main.h"

/**
 * malloc_checked -  allocated memory
 * @b: the number of bytes to allocate
 *
 * Return: Nothing
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (exit(98));
	}
	else
	{
		return (ptr);
	}
}

