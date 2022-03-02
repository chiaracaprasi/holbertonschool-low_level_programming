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
 * str_concat - concatenates two strings
 * @s1: string given
 * @s2: string given
 * Return: Null if error or s1 or s2 are null, otherwise pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	_strcpy(result, s1);
	_strcpy(result + len1, s2);

	return (result);
}
