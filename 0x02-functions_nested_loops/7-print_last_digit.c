#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * print_last_digit - Entry point
 * @n: intput character
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int m;

	m = (n % 10);
	if (m < 0)
	{
		m = (-1 * m);
	}
	_putchar(m + '0');
	return (m);
}
