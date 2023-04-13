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
	unsigned int s1len, s2len, len, i, j;
	char *con_str;

	s1len = strlen(s1);
	s2len = strlen(s2);
	len = s1len + s2len;
	con_str = malloc((len + 1) * sizeof(char));
	if (con_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		con_str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		con_str[i] = s2[j];
	}
	con_str[i] = '\0';

	return (con_str);
}
