#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of character arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
