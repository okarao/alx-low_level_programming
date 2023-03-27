#include "main.h"

/**
 * rev_string - reverse strings
 * @s: input string
 * Return: the string in reverse order
 */

void rev_string(char *s)
{
	char temp[];
	int i, j = 0;

	i = strlen(s) - 1;
	while (i >= 0)
	{
		while (j < strlen(s))
		{
			temp[j] = s[i];
			j++;
		}
		i--;
	}
	s = temp;
}
