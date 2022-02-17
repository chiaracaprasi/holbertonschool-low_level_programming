#include "main.h"
#include <stdio.h>

/**
 * string_touppper - changes all lowercase letters to uppercase
 * @char: string passed
 *
 * Return: nothing.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return(s);
}
