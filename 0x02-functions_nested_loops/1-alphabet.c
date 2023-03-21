#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 * print lowercase alphabets
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
