#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile -reads a text file and prints it to the POSIX standard output
 * @filename: name of file given
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size, to_print;

	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
		return (0);

	size = read(fd, buf, letters);

	if (size < 0)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[letters] = '\0';

	to_print = write(STDOUT_FILENO, buf, size);
	if (to_print < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (to_print);
}
