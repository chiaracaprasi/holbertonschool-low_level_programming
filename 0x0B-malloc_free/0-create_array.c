#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars,
 * and initializes it with specific char.
 * @size: the size of the memory to print
 * @c: char given
 *
 * Return: Null if size 0, otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size < 1)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
