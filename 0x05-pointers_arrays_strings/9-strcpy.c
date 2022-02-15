#include "main.h"
#include <stdio.h>

/**
 * _strcpy - print a string followed by new line
 * @dest: pointer to array given as parameter
 * @src: number of elements of the array to be printed
 * Return: char* the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;

		dest[count] = '\0';
	}
	return (dest);
}
