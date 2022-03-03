 #include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns value of a string
 * @s: pointer to string given as parameter
 * Return: Always 0.
 */
unsigned int _strlen(char *s)
{
	unsigned int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}

	return (n);

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
	unsigned int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc((len1 + n + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (n > 0)
	{
		result[i] = s2[j];
		i++;
		j++;
		n--;
	}
	result[i] = '\0';

	return (result);
}
