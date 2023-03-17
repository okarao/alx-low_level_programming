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
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
