#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: input string
 * Return: Integer equivalent 
 */
int _atoi(char *s)
{
	int i, len;
	int num, sign, con =0;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			con = 1;
		}
		else if (con == 1)
			break;

		i++;
	}
	num *= sign;
	return num;
}
