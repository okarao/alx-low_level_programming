#include "main.h"

/**
 * get_endianness - checks the endianness of a system (little or big)
 *
 *
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
	int num_var = 1;

	char *ptr = (char *)&num_var;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
