#include "main.h"

/**
 * print_line - prints a straight line
 * @n: number of times the character should be printed
 * Return: A line or enf of line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

