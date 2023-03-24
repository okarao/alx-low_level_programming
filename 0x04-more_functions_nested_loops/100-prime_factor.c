#include <stdio.h>
/**
 * main - entry point
 * Print prime factors of a number
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int primeFactor, a, b;
	long num;

	num = 612852475143;

	for (a = 2; a <= num; a++)
	{
		if (num % a == 0)
		{
			primeFactor = 1;
			for (b = 2; b <= (a / 2); b++)
			{
				if (a % b == 0)
				{
					primeFactor = 0;
					break;
				}
			}
			if (primeFactor == 1)
			{
				printf("%d, ", a);
			}
		}
	}
	return (0);
}

