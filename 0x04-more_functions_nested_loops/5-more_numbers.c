#include "main.h"

/**
 * more_numbers - print 0 - 14 10 times
 *
 * Return: 0 to 14 ten times
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		while (b <= 14)
		{
			_putchar('0' + b);
			if ((b / 10) > 0  && (b % 10) >= 0)
			{
				_putchar('0' + (b % 10));
			}
			b++;
		}
		_putchar('\n');
	}
}

