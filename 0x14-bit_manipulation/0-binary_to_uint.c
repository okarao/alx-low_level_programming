#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a string of 0 and 1 char
 *
 * Return: unisigned number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, weight = 1, len;
	int	i;
	
	if (b == NULL)
		return (0);
	
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * weight;
		weight *= 2;
	}
	return (num);
}
