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

	int fd = open(filename, O_RDONLY);


	if (fd == -1)
		return (0);

	while (letters > 0 && read(fd, &letters_read, 1) == 1)
	{
		if (write(STDOUT_FILENO, &letters_read, 1) != 1)
		{
			close(fd);
			return (0);
		}
		count++;
		letters--;
	}
	close(fd);
	return (count);
}
