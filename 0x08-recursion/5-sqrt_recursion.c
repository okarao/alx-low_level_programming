#include "main.h"

/**
 * findSqrt - calculate the square root
 * @int: input number
 * @int: a guess
 * Return: the square root
 */
int findSqrt(int, int);

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number
 *
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	return (findSqrt(n, 1));
}
/**
 * findSqrt - calculate the square root
 * @n: the number
 * @g: a guess
 * Return: the square root
 */


int findSqrt(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	if (g * g > n)
	{
		return (-1);
	}
	return (findSqrt(n, g + 1));
}

