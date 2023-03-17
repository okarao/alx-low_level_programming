#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*this program prints all combinations of single digit numbers. */
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar('0' + b);
		if (b == 9)
			continue;
		putchar(','+' ');
	}

	putchar('\n');
	return (0);
}
