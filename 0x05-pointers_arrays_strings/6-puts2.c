#include "main.h"

/**
 * puts2 - prints a string followed by a new line
 * @str: input string
 * Return: Output a string
 */
void puts2(char *str)
{
	while (*str)
	{
		if (*str != '\0')
			_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
