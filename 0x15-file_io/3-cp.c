#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 1 on success or -1 on failure
*/

int main(int argc, char *argv[])
{
	int fd1, fd2, closef1, closef2;

	if (argc != 3)
	{
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}

	closef1 = close(fd1);
	closef2 = close(fd2);

	if (closef1 < 0 || closef2 < 0)
	{
		if (closef1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);

		if (closef2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);

		exit(100);
	}

	return (0);
}
