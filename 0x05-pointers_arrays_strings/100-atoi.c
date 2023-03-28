#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: input string
 * Return: Integer equivalent 
 */
int _atoi(char *s)
{
	int i, len;
	int num;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		num = num * 10 + (s[i] - '0');
	}
	return num;
}
