#include "main.h"

/**
 * _strspn - gets the length of a prefix subsbrig
 * @s: input string to search from
 * @accept: the string containing characters to be searched
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a, count;

	i = a = 0;
	count = 0;

	while (s[i] != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
			{
				count++;
				break;
			}
			a++;
		}
		if (accept[a] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
