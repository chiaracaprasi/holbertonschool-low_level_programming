#include "main.h"
#include <stdio.h>

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
		}
/* check for separators */
		if (str[j] == ' ' || str[j] == '\n' || str[j] == '\t' ||
		    str[j] == ',' || str[j] == ';' || str[j] == '.' ||
		    str[j] == '!' || str[j] == '?' || str[j] == '"' ||
		    str[j] == '(' || str[j] == ')' || str[j] == '{' ||
		    str[j] == '}' || (str[j] == '!' && str[j] == ' '))
		{
			/* if space found go to next char */
			++j;

			if ((str[j] >= 'a' && str[j] <= 'z'))
				str[j] = str[j] - 32;
			else if (str[j] == ' ' || str[j] == '\n' ||
				 str[j] == '\t' || str[j] == ',' ||
				 str[j] == ';' || str[j] == '.' ||
				 str[j] == '!' || str[j] == '?' ||
				 str[j] == '"' || str[j] == '(' || str[j] == ')'
				 || str[j] == '{' || str[j] == '}')
			{
				++j;
				if ((str[j] >= 'a' && str[j] <= 'z'))
				{
					str[j] = str[j] - 32;
				}
			}
		}
	}
		return (str);
}
