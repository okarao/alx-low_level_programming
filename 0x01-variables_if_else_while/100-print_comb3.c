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
	int c,b;

	for (b = 0; b <= 9; b++)
	{
		for (c = b+1; c <= 9; c++)
		{
			putchar('0'+b);
			putchar('0'+c);
			if(b == 8 && c ==9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
