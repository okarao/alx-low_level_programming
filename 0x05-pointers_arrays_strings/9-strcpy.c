#include "main.h"

/**
 * _strcpy - copy one string into another string
 * @dest: the destinationation string
 * @src: the source string
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}
