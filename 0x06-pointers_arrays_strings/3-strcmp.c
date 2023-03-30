#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: input string
 * @s2: input string
 * Return: 0 is no match
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while ((*s1) != '\0' && (*s2) != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		result = 0;
	}
	else
	{
		result = (*s1 - *s2);
	}
	return (result);
}
