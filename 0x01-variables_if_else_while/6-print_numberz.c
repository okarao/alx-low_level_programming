#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*this program prints alphabets is lower case */
/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	for (c = 0; c < 10; c++)
	{
		putchar('0' + c);
	}
	putchar('\n');
	return (0);
}
