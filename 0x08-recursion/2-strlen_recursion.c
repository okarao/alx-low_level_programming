#include "main.h"

/**
 * _strlen_recursion - print string length
 * @s: input string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 1;
	if (*s != '\0')
	{
		len += _strlen_recursion(s + 1);
	}
	else
	{
		return (0);
	}
	return (len);
}

