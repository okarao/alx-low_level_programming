#include "main.h"

/**
 * _memset - fill a memory block with a number of bytes
 * @s: a pointer to the memory block to be filled
 * @b: the unsigned character to filled
 * @n: the number of times b should be filled
 * Return: pointer s after filling
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
