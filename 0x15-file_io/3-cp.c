#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * closefd - close file
 * @fd: file to be closed
 * Return: void
 */
void closefd(int fd)
{
	int error = close(fd);

	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_error - show error and exit if file cannot be read
 * @filename: file to be read
 * Return: void
*/

void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * write_error - show error and exit if file cannot be write
 * @filename: file to be written
 * Return: void
*/

void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 1 on success or -1 on failure
*/

int main(int argc, char *argv[])
{
	int fd1, fd2, fd_read = 1, fd_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 < 0)
		read_error(argv[1]);

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 < 0)
	{
		closefd(fd1);
		write_error(argv[2]);
	}

	while (fd_read != 0)
	{
		fd_read = read(fd1, buffer, 1024);

		if (fd_read == -1)
			read_error(argv[1]);

		fd_write = write(fd2, buffer, fd_read);

		if (fd_write == -1)
			write_error(argv[2]);
	}

	closefd(fd1);
	closefd(fd2);

	return (0);
}
