#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the number of characters
 * Return: A triangle using # character
 */

void print_triangle(int size)
{
	int a, b, c;

	for (a = 1; a <= size; a++)
	{
		for (b = a; b <= size - 1; b++)
		{
			_putchar(' ');
		}
		for (c = size; c > size - a; c--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
