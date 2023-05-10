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
	char letters_read;

	FILE *myFile;

	if (filename == NULL)
		return (0);

	myFile = fopen(filename, "r");

	if (myFile == NULL)
	{
		return (0);
	}
	while (letters > 0 && (letters_read = fgetc(myFile)) != EOF)
	{
		_putchar(letters_read);
		count++;
		letters--;
	}
	fclose(myFile);
	return (count);
}
