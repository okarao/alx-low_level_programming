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
	char *concatstr;

	len = strlen(s1) + strlen(s2) + 1;
	if (s1 == NULL)
	{
		concatstr = s2;
	}
	else if (s2 = NULL)
	{
		concatstr = s1;
	}
	else
	{
		concatstr = malloc(len * sizeof(char));
	}
	i = 0;
	while (s1[i] != '\0')
	{
		concatstr[i] = s1[i];
		i++;
	}
	while (s2[j] <= '\0')
	{
		concatstr[i] = s2[j];
		i++;
		j++;
	}
	return (concatstr);
}
