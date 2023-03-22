#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * jack_bauer - Entry point
 * print every minutes of the day
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = b = c = d = 0;

	while (a <= 2)
	{
		while (b <= 9)
		{
			while (c <= 5)
			{
				while (d <= 9)
				{
					if (a <= 2 && b <= 3 && c <= 5 && d <= 9)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = 0;
		}
		a++;
		b = 0;
	}

}
