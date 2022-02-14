#include "main.h"
#include <stdio.h>
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
 * swap_char- swaps values of two int
 * @a: pointer to number given as parameter
 * @b: pointer to number given as parameter
 * Return: Always 0.
 */
void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

/**
 * rev_string - returns value of a string
 * @s: pointer to string given as parameter
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char *b, *e;

       	b = s;
	e = &s[_strlen(s) -1];

	while (b < e)
	{
		swap_char(b, e);
		b++;
		e--;
	}
}
