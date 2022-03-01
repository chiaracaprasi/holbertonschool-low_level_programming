#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns value of a string
 * @s: pointer to string given as parameter
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);

}


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

/**
 * _strdup - returns a pointer to newly allocated memory
 * @str: string given
 *
 * Return: Null if size 0, otherwise pointer to array
 */
char *_strdup(char *str)
{
	char *result = malloc((_strlen(str) + 1) * sizeof(char));

	if (str == 0)
	{
		return (NULL);

	}
	if (result == NULL)
	{
		return (NULL);
	}
	_strcpy(result, str);
	return (result);
}
