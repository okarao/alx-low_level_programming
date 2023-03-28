#include "main.h"

/**
 * puts_half - prints second half of the string
 * @str: the input string
 * Return: The second half of a string or n last characters
 */

void puts_half(char *str)
{
	int len, n, i, j;
	int len1;

	len = strlen(str);
	len1 = len / 2;
	n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = len1; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		i = len1;
		j = 0;
		while (j <= n)
		{
			_putchar(str[i]);
			i++;
			j++;
		}
	}
	_putchar('\n');
}
