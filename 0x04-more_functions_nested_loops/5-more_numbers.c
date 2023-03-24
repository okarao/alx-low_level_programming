#include "main.h"

/**
 * more_numbers - print 0 - 14 10 times
 *
 * Return: 0 to 14 ten times
 */

void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
				_putchar(b / 10 + '0');

			c = b % 10;
			_putchar('0' + c);
			b++;
		}
		_putchar('\n');
	}
}

