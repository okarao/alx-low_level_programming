#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the input number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary = 1;
	int count = 0, i;

	while ((n >> count) > 0)
		count++;
	if (n == 0)
		_putchar('0');

	for (i = count - 1; i >= 0; i--)
	{
		if ((n & (binary << i)) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
