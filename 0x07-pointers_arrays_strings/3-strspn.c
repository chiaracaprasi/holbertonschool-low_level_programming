#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string given
 * @c: character given to locate
 *
 * Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string given
 * @accept: initial segment of s
 *
 * Return: number of bytes in the initial segment of s (bytes from accept)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while( *s != '\0' && _strchr(accept , *s) != 0)
	{
		s++;
		len++;
	}

	return (len);
}
