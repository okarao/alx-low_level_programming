#include "main.h"

/**
 * main - entry point
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 * Return: the number of arguments passed
 */

int main(int argc, char *argv[])
{
	int count;

	count = 0;
	if (argc > 1)
	{
		count = argc - 1;
	}
	printf("%d\n", count);
	while (*argv)
		argv++;

	return (0);
}
