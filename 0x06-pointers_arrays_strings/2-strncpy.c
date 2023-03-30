#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of strings to copy
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
