#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times the character should be printed
 * Return: A diagonal or end of line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = n; i >= 1; i--)
		{
			for (j = 1; j <= n - i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}

