#include "main.h"

/**
 * _puts_recursion- check the code
 * @s: string given
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
		_putchar('\n');
}
