#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a string contain integer
 * @s: the input string
 *
 * Return: 0 or 1
 */
int _isdigit(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
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

	for (a = 1; a < argc; a++)
	{
		if (_isdigit(argv[a]))
		{
			result += atoi(argv[a]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);

	return (0);
}
