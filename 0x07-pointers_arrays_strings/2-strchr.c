#include "main.h"

/**
 * _strchr - search for a character in a string
 * @s: input string
 * @c: the character to be located
 * Return: the address of the chacter or null if character not found
 */
char *_strchr(char *s, char c)
{
	char *result;

	while (*s != '\0')
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		else
		{
			result = NULL;
		}
		s++;
	}
	return (result);
}
