#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the input number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (binary)
	{
		if (n & binary)
		{
			_putchar('1');
			count = 1;
		}
		else if (count)
			_putchar('0');

		binary >>= 1;
	}
}
