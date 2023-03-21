#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * print _putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
