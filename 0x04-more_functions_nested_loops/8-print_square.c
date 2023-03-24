#include "main.h"

/**
 * print_square - prints diagonal
 * @size: number of times the character should be printed
 * Return: A diagonal or end of line
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;

	if (size >= 1)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

