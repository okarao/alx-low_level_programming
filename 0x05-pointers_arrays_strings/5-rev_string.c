#include "main.h"

/**
 * rev_string - reverse strings
 * @s: input string
 * Return: the string in reverse order
 */

void rev_string(char *s)
{
	int temp;
	int length, i;

	length = strlen(s);
	i = 0;
	while (i < length/2)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
		i++;	
	}
	s = temp;
}
