#include "main.h"
#include <stdio.h>

/**
 * rot13 - hat encodes a string into 1337.
 * @str: string passed
 *
 * Return: string.
 */
char *rot13(char *str)
{
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52 ; j++)
		{
			if (str[i] == a[j])
				str[i] = b[j];
		}
	}
	return (str);
}
