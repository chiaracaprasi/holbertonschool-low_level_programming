#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size of the memory to allocate
 *
 * Return: pointer to array or exit code 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
