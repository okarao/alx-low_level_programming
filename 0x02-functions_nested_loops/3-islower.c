#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: intput return 1 is the character is lower and return 0 otherwise
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (islower(c) > 0)
		return (1);
	else
		return (0);
}
