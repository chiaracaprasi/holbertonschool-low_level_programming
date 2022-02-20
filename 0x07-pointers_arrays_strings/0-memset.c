#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area pointed to
 * @n: the size of the memory to print
 * @b: constant byte
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int count = 0;

	while (count < n)
	{
		*(s + count) = b;
		count++;
	}

	return (s);
}
