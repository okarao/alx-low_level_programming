#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks if character is digit (0 -9)
 * @c: input character
 * Return: if c is digit return 1 otherwise return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
