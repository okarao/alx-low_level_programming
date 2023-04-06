#include "main.h"

/**
 * factorial -  prints factorial of a number
 * @n: integer variable
 *
 * Return: the factorial of a number or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
