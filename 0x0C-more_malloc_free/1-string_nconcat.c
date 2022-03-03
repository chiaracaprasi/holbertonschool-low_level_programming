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
 * _strncat - concatenates two strings
 * @dest: parameter char given
 * @src: parameter char given
 * @n: number given as parameter
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}


/**
 * string_nconcat -  concatenates two strings
 * @s1: string given
 * @s2: string given
 * @n: number of bytes of s2 to be copied
 * Return: Null if error,  otherwise pointer to array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc((len1 + n) * sizeof(char));

	if (result == NULL)
		return (NULL);

	_strcpy(result, s1);
	_strncat(result, s2, n);

	return (result);
}
