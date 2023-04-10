#include "main.h"

/**
 * _print_rev_recursion -  print reverse string
 * @s: the input string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}