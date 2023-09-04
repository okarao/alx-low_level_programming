#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * @c: input character
 * Return: if c is uppere return 1 otherwise return 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
