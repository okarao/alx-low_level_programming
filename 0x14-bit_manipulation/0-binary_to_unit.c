#include "main.h"

/**
 * binary_to_unit - converts a binary to an unsigned int
 * @b: pointer to a string of 0 and 1 char
 *
 * Return: unisigned number or 0
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0, weight = 1, mod, i;
	
	if ( b == NULL || (*b != 0 && *b != 1))
		return (0);
	
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		num += (b[i] - '0') * weight;
		weight *= 2;
	}
	return (num);
}
