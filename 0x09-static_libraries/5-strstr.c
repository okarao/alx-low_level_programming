#include "main.h"
/**
 * _strstr - finds the first occurence of a substring
 * @haystack: the string
 * @needle: the substring to be located
 * Return: a pointer to the begining of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return ((char *) &haystack[i]);
		}
	}
	return (NULL);
}
