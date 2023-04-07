#include "main.h"

/**
 * isPrime - find the prime number
 * @n: input number
 * @b: input number
 * Return: 1 if prime 0 otherwise
 */

int isPrime(int n, int b)
{
	if (n % b == 0 || n < 2)
	{
		return (0);
	}
	else if (b == n - 1)
	{
		return (1);
	}
	else 
	{
		return (isPrime(n, b + 1));
	}
}
/**
 * is_prime_number - determine if a number is prime
 * @n: the number
 *
 * Return: 1 if number is prime or 0 otherwise
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
