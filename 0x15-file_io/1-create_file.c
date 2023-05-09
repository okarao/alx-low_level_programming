#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file created
 * @text_content: the content of the file
 *
 * Return: 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{
	FILE *myFile;
	int len = 0, status;

	if (filename == NULL)
		return (-1);
	myFile = fopen(filename, O_WRONLY | O_CREAT | O_TRUNC, "0600");

	if (myFile == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		status = write(myFile, text_content, len);
		if (status == -1)
		{
			fclose(myFile);
			return (-1);
		}
	}
	fclose(myFile);
	return (1);
}
