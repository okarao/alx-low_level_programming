#include "main.h"
/**
 * count_set_bits - counts the the number of set bits
 * @num: number to be set
 *
 * Return: the count of set bits
 */
unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count = 0;

	while (num > 0)
	{
		count++;
		num &= (num - 1);
	}
	return (count);
}
/**
 * flip_bits - counts the number of bits to be flopped
 * @n: first number
 * @m: second number
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}
