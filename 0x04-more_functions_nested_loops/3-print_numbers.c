#include "main.h"
/**
 * print_numbers -  print numbers 0 - 9
 * 
 * Return: print number 0 - 9
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
