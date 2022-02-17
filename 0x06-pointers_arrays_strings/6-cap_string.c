#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string passed
 *
 * Return: string.
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

	return (s);
}

/**
 * cap_string -  capitalizes all words of a string.
 * @str: string passed
 *
 * Return: string.
 */
char *cap_string(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		/* check first char is lower case and makes it capital */
		if (j == 0)
		{
			if ((str[j] >= 'a' && str[j] <= 'z'))
			{
				str[j] = str[j] - 32;
			}
			continue;
		}
/* check for spaces */
		if (str[j] == ' ' || str[j] == '\n' || str[j] == '\t' ||
		    str[j] == ',' || str[j] == ';' || str[j] == '.' ||
		    str[j] == '!' || str[j] == '?' || str[j] == '"' ||
		    str[j] == '(' || str[j] == ')' || str[j] == '{' ||
		    str[j] == '}')
		{
/* if space found go to next char */
			++j;
/* check if next char is lower case */
			if ((str[j] >= 'a' && str[j] <= 'z'))
			{
				str[j] = str[j] - 32;
			}
			continue;
		}
	}
	return (str);
}
