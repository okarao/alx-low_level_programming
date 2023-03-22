#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: input variable
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
			printf("%d, ", i);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
	}
	else
		printf("98");
}
