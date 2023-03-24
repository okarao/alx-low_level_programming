#include <stdio.h>

/**
 * main - print 1 to 100
 * Print Fizz, Buzz and FizzBuzz for multiple of 3, 5 and both
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0)
			printf("Fizz ");
		else if ((a % 5) == 0)
		{
			if (a % 3 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}

