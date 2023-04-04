#include "main.h"
/**
 * _memcpy -  copy contents from src to dest memory locations
 * *dest: the destination memory location
 * @src: the source memory location
 * @n: the number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (src[i] != '\0' && i <= n)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (dest);
}
