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
	char *str;
	unsigned int ln1, ln2, i, j;

	i = j = 0;
	if (s2 == NULL)
		ln2 = 0;
	ln1 = strlen(s1);
	ln2 = strlen(s2);

	if (n >= ln2)
		str = malloc((ln1 + ln2 +1) * sizeof(char));
	else
		str =malloc((ln1 + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
