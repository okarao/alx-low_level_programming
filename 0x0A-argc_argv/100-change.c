#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - sum up all positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, a;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		printf("0\n");
	}
	while (a > 0)
	{
		if (a >= 25)
		{
			a /= 25;
			result++;
		}
		if (a >= 10)
		{
			a /= 10;
			result++;
		}
		if (a >= 5)
		{
			a /= 5;
			result++;
		}
		if (a >= 2)
		{
			a /= 2;
			result++;
		}
		a /= 1;
	}
	printf("%d\n", result);

	return (0);
}
