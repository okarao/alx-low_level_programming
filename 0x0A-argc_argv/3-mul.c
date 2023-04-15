#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	printf("num1 is: %d and num2 is: %d\n", a, b);
	result = a * b;

	printf("%d", result);
	_putchar('\n');

	return (0);
}

