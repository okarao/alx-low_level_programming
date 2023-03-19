#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*this program prints all the numbers of base 16 in lowercase. */
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, c, b;

	for (b = 0; b <= 9; b++)
	{
		for (c = b + 1; c <= 9; c++)
		{
			for (a = c + 1; a <= 9; a++)
			{
				putchar('0' + b);
				putchar('0' + c);
				putchar('0' + a);
				if (b == 7 && c == 8 && a == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
