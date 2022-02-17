#include "main.h"
#include <stdio.h>

/**
 * leet - hat encodes a string into 1337.
 * @str: string passed
 *
 * Return: string.
 */
char *leet(char *str)
{
	char *l = "aAeEoOtTlL";
	char *n = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == l[j])
				str[i] = n[j];
		}
	}
	return (str);
}
