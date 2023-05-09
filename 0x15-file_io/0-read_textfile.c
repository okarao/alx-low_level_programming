#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to POSIX standard output
 * @filename: file pointer variable
 * @letters: number of characters
 *
 * Return: number of letters read and printed or 0
 */


ssize_t read_textfile(const char *filename, size_t letters) 
{
	ssize_t count = 0;
	char leters_read;
	
	FILE *myFile;

	myFile = fopen(filename, "r");

	if (myFile == NULL)
	{
		return (0);
	}
	while ( (letter_read = fgetc(myFile)) != EOF)
	{
		_putchar(letter_read);
		count++;
	}
	return (count);
}
