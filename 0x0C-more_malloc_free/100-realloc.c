#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memcpy -copies memory area.
 * @src: memory area to be copied from
 * @n: the size of the memory to print
 * @dest: memory area to copy to
 *
 * Return: pointer to the memory area destination
 */
void *_memcpy(void *dest, void *src, unsigned int n)
{

	unsigned int count = 0;
	char *fill_dest = dest;
	char *fill_src = src;

	while (count < n)
	{
		*(fill_dest + count) = *(fill_src + count);
		count++;
	}

	return (dest);
}

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr:  pointer to the memory
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of new memory block
 * Return: pointer to allocate memory, NULL if malloc fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}
	new_ptr = malloc(new_size);

	if (new_size > old_size)
		_memcpy(new_ptr, ptr, old_size);

	else if (old_size > new_size)
		_memcpy(new_ptr, ptr, new_size);

	free(ptr);

	return (new_ptr);

}
