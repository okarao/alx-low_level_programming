#include "main.h"
/**
 * _memcpy -  copy contents from src to dest memory locations
 * @dest: the destination memory location
 * @src: the source memory location
 * @n: the number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (i <= n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}
