#include "main.h"

/**
 * string_toupper - convert the lowercase characters to upper
 * @str: the input string
 * Return: str with all character uppercase
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
