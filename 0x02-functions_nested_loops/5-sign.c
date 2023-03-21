#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _print_sign - Entry point
 * @n: intput character
 * Return: Always 0 (success)
 */
int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
