#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - this function prints the name 
 * @name: array of character for name
 * @f: point to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
