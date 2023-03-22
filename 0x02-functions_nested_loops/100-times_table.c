#include "main.h"
/**
 * print_times_table - n times table
 * @n: number less than or equal 15 but not less than 0
 * Return: no return value
 */
void print_times_table(int n)
{
	int i, j, product;

	if (!(n > 15) && !(n < 0))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n;  j++)
			{
				product = i * j;
				if (j == 0)
				{
					_putchar('0' + product);
				}
				else if (product >= 10)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
