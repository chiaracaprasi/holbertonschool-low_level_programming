#include "main.h"

/**
 * _memcpy -copies memory area.
 * @src: memory area to be copied from
 * @n: the size of the memory to print
 * @dest: memory area to copy to
 *
 * Return: pointer to the memory area destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int count = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count);
		count++;
	}

	return (dest);
}
