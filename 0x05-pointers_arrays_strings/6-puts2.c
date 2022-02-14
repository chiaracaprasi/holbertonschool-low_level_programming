#include "main.h"

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
  * puts2 - print a string followed by new line
 * @str: pointer to string given as parameter
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
