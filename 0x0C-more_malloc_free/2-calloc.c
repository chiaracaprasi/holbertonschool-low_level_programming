#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:  number of elements of data type
 * @size: size of data type
 * Return: pointer to allocate memory, NULL if malloc fails or nmemb /size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	p = ptr;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
