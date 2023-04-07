#include "main.h"

/**
 * isPalindrome - function to detect if a string is palindrome
 * @s: input string
 * @b: integer variable to mark the beginning of string
 * @e: integer variable to mark the end of string
 * Return: 1 if a string is palindrome or 0 otherwise
 */

int isPalindrome(char *s, int b, int e)
{
	if (s == NULL || b < 0 || e < 0)
	{
		return (0);
	}
	if (b >= e)
	{
		return (1);
	}
	if (s[b] == s[e])
	{
		return (isPalindrome(s, b + 1, e - 1));
	}
	return (0);
}
/**
 * is_palindrome - determine if a string is a palindrome
 * @s: the input string
 *
 * Return: 1 if a string is palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (isPalindrome(s, 0, strlen(s) - 1));
}
