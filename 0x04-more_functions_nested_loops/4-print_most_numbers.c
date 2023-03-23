#include "main.h"
/**
 * print_most_numbers -  print numbers 0 - 9
 * Eliminate 2 and 4
 * Return: print number 0 - 9
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar('0' + c);
		if (c == 2 || c == 4)
			continue;
		c++;
	}
	_putchar('\n');
}
