#include "main.h"

/**
 * cap_string - capitalize each word in a string
 * @str: the input string
 * Return: str with each word capitalized
 */
char *cap_string(char *str)
{
	int i, count, len, unit;
	
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	unit = 32;
	len = strlen(sep) -1;
	while (str[i] != '\0')
	{
		if (str[i] <= 'a' && str[i] >= 'z')
		{
			str[i] = str[i] - unit;
		}
		unit = 0;
		for (count = 0; count <= len; count++)
		{
			if (sep[count] == str[i])
			{
				unit = 32;
				continue;
			}
		}
		i++;
	}
	return (str);
}
