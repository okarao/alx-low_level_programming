#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: the input number
 * @index: position of the bit
 *
 * Return: 1 on success and -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1UL >> index);

	return (1);
}
