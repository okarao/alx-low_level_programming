#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 * print lowercase alphabets 10 times
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
		c = 'a';
	}
}
