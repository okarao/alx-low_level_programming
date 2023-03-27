#include "main.h"

/**
 * rev_string - reverse strings
 * @s: input string
 * Return: the string in reverse order
 */

void rev_string(char *s)
{
	char *temp;
	int length, i, j = 0;

	length = strlen(s);
	i = length - 1;
	while (i >= 0)
	{
		while (j <= length)
		{
			temp[j] = s[i];
			j++;
		}
		i--;
	}
	s = temp;
}
