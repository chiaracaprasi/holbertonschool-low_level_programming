#include "main.h"

/**
 * _puts_recursion- check the code
 * @s: string given
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
	{
		_puts_recursion(s);

	}
	_putchar('\n');
}
