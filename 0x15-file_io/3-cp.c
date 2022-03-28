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
	int fd1;

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


	close(fd1);
	return (0);
}
