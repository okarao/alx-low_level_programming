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
	int c, b, a, d;

	for (b = 0; b < 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			putchar('0' + b % 10);
			putchar('0' + c % 10);
			putchar(' ');
		}
	}
	for (a = 0; a <= 9; a++)
	{
		for (d = 1; d <= 9; d++)
		{
			putchar('0' + a % 10);
			putchar('0' + d % 10);
			putchar(',');
		}
	}					        
	putchar('\n');
	return (0);
}
