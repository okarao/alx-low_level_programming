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
	if (len == NULL || s1 == NULL || s2 == NULL)
	{
		return (NULL);
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
