#include "main.h"
/** 
 * copy_file - copies the content from file_from to file_to
 * @file_from: The source file name
 * @file_to: The destination file name
 *
 * Return: Nothing
 */
void copy_file(const char *file_from, const char *file_to)
{
        int fd_from, fd_to, read_bytes, write_bytes;
        char buffer[BUFFER_SIZE];

        fd_from = open(file_from, O_RDONLY);
        if (fd_from == -1)
                print_error("Error: Can't read from file", 98);

        fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

        if (fd_to == -1)
                print_error("Error: Can't write to file", 99);

        while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
        {
                write_bytes = write(fd_to, buffer, read_bytes);

                if (write_bytes == -1)
                        print_error("Error: Can't write to file", 99);
        }
        if (read_bytes == -1)
                print_error("Error: Can't read from file", 98);

        if (close(fd_from) == -1)
                print_error("Error: Can't close fd", 100);

        if (close(fd_to) == -1)
                print_error("Error: Can't close fd", 100);
}

