#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0, num = 0, sign = 1;
	
	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		num = 10 * num + (s[i++] - '0');
	}
	return (sign * num);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("num1 is: %d and num2 is: %d\n", num1, num2);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

