#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * times_table - Entry point
 * print the 9 times table, starting with 0
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c < 10)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b == 9)
				continue;
			_putchar(',');
			_putchar('\t');
		}
		_putchar('\n');
	}
}
