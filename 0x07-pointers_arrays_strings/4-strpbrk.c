#include "main.h"

/**
 * _strpbrk - searches a string for any of set of bytes
 * @s: the string to search from
 * @accept: the string containing characters to search
 * Return: pointer to the byte in s or null if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	char *result;

	while (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		result = accept;
		while (*result != '\0')
		{
			if (*result == *s)
			{
				return (s);
			}
			result++;
		}
		s++;
	}
	return (NULL);
}
