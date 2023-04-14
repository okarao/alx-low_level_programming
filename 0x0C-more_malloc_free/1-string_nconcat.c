#include "main.h"

/**
 * string_nconcat - concat string s1 and first n characters of s2
 * @s1: first input string
 * @s2: second input string
 * @n: number of characters to extract from s2
 * Return: Pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int i, j, s1len, len;

	s1len = len = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		s1len++;
		i++;
	}

	len = s1len + n;
	newstring = malloc(len + 1 * sizeof(char));
	if (newstring == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		newstring[i] = s1[i];
	for (j = 0; j <= n && s2[j] != '\0'; j++, i++)
	{
		newstring[i] = s2[j];
	}
	newstring[i] = '\0';
	return (newstring);
}
