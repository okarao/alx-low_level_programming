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
	char c;
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar('0' + b);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
