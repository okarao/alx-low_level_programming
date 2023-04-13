#include "main.h"

/**
 * str_concat - concatinate two strings and return pointer to new string
 * @s1: first input string
 * @s2: second input string
 *
 * Return: pointer to new string or null
 */

char *str_concat(char *s1, char *s2)
{
	int len, i, j;
	char *s;

	len = strlen(s1) + strlen(s2) + 1;
	s = malloc(len * sizeof(char));
	if (s1 == NULL)
	{
		while(*s2)
		{
			s++ = s2++;
		}
	}
	if (s2 == NULL)
	{
		while (*s1)
		{
			s++ = s1++;
		}
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] <= '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
