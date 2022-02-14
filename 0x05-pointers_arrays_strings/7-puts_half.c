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
  * _puts - print a string followed by new line
 * @str: pointer to string given as parameter
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

/**
 * puts_half - returns value of a string
 * @str: pointer to string given as parameter
 * Return: Always 0.
 */

void puts_half(char *str)
{
	char *m;
	int len = _strlen(str);

	if (len % 2 != 0)
	{
		m = &str[(len - 1) / 2];

	}

	else
	{
		m = &str[len / 2];
	}

	_puts(m);
}
