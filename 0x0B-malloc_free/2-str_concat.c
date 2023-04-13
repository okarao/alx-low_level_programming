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
	unsigned int s1_len, s2_len, i, j;
	char *con_str;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	con_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (con_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(s1); i++)
		{
			con_str[i] = s1[i];
		}
		for (j = 0; j < strlen(s2); j++)
		{
			con_str[s1_len + j] = s2[j];
		}
		con_str[s1_len + j] = '\0';
	}
	return (con_str);
}
