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
	unsigned int len, i, j;
	char *con_str;

	len = strlen(s1) + strlen(s2) + 1;
	con_str = malloc(len * sizeof(char));
	if (con_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= strlen(s1); i++)
		{
			con_str[i] = s1[i];
		}
		for (j = 0; j <= strlen(s2); j++)
		{
			con_str[i + j] = s2[j];
		}
	}
	return (con_str);
}
