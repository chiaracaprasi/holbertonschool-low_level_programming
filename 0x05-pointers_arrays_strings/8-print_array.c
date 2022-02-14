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
  * print_array - print a string followed by new line
 * @a: pointer to array given as parameter
 * @n: number of elements of the array to be printed
 *Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;
//	int len = _strlen(str);

	for (i = 0; i <= n; i++)
	{
		printf("%i, ", a[i]);
	}
	_putchar('\n');

}
