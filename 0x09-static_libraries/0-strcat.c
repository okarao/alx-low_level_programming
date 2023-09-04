#include "main.h"

/**
 * _strcat - join two strings and return the joined string
 * @dest: the destination string
 * @src: the source string
 * Return: retun the concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
