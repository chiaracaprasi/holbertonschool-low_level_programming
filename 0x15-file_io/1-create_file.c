#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, sz_write;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	sz_write = write(fd, text_content, len);

	if (sz_write < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
