#include "main.h"
#include <stdio.h>

/**
 * _strncat - join two strings and return the joined string
 * @dest: the destination string
 * @src: the source string
 * @n: number of character to concat
 * Return: retun the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i, j;

	i = j = 0;
	len = strlen(src);

	while (dest[i] != '\0')
		i++;
	if (len >= n)
	{
		while (j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	else
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}

	dest[i] = '\0';

	return (dest);
}
