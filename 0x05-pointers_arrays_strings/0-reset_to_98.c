#include "main.h"

/**
 * reset_to_98 - use a point to update the value to 98
 * @n: integer pointer
 * Return: update the value pointed to 98
 */

void reset_to_98(int n)
{
	int *p;

	p = &n;
	*p = 98;
}
