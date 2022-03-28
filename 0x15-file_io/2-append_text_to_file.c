#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of file
 * @filename: name of file to create
 * @text_content: NULL terminated string to add to the end of the file
 * Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz_write, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = strlen(text_content);
	sz_write = write(fd, text_content, len);

	if (sz_write < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
