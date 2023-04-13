#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input string
 *
 * Return: the pointer to new string or null if empty
 */

char *_strdup(char *str)
{
	int len, i;
	char *cpstr;

	len = strlen(str) + 1;
	cpstr = malloc(len * sizeof(char));
	if (cpstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= len; i++)
		{
			cpstr[i] = str[i];
		}
		cpstr[i] = '\0';
	}
	return (cpstr);
}
