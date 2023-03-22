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
	int a, b;

	a = b = 0;

	while (a <= 24)
	{
		while (b <= 59)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
		b = 0;
	}
	
}
