#include "main.h"

/**
 * get_bit - returns a the value of a bit at an index
 * @n: integer input
 * @index: the index from which to return bit
 *
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
		return (-1);

	return ((n >> index) & 1);

}
