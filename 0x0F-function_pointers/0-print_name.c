#include <stdlib.h>
#include "function_pointer.h"
/**
 * print_name - this function prints the name 
 * @name: array of character for name
 * @f: point to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f = print_name;
	printf("%s\n", f(name));
}
