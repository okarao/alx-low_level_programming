#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Entry point
 * @c: intput return 1 is the character is an alphabet and return 0 otherwise
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
