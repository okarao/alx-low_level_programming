#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s: pointer to the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int strl = 0;

	while (&s)
	{
		strl += 1;
		s++;
	}
	return (strl);
}
