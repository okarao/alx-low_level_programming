#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: input string
 * Return: return s in reverse
 */
void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
