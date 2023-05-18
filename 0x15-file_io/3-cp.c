#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, otherwise error code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, ret;
        char buffer[BUF_SIZE];
        ssize_t num_read, num_written;

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
                return 97;
        }

        fd_from = open(argv[1], O_RDONLY);
        if (fd_from == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                return 98;
        }

        fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (fd_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                close(fd_from);
                return 99;
        }

        while ((num_read = read(fd_from, buffer, BUF_SIZE)) > 0)
        {
                num_written = write(fd_to, buffer, num_read);
                if (num_written != num_read)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                        close(fd_from);
                        close(fd_to);
                        return 99;
                }
        }

        if (num_read == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                close(fd_from);
                close(fd_to);
                return 98;
        }

        ret = close(fd_from);
        if (ret == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
                close(fd_to);
                return 100;
        }

        ret = close(fd_to);
        if (ret == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
                return 100;
        }

        return 0;
}

