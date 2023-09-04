#include "main.h"

/**
 * main - the entry point
 * @argc: The number of arguments
 * @argv: Array of input
 *
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);

	const char *file_from, *file_to;
       	
	*file_from = argv[1];
	*file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}

