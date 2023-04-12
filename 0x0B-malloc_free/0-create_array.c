#include "main.h"

/**
 * create_array - creates an array of type char and size size
 * @size: the size of array
 * @c: character used to fill the array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *str;

	str = malloc(size * sizeof(c));
	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			str[j] = c;
		}
	}
	else
	{
		return (NULL);
	}
	free(str);
	return (str);
}


