#include "main.h"

/**
 * print_error - Prints error message and exits code
 * @msg: The error message to print
 * @code: The exit code
 *
 * Return: Nothing
 */

void print_error(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}
