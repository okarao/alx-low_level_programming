#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times the character should be printed
 * Return: A diagonal or end of line
 */

void print_diagonal(int n)
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
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

