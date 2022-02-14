#include "main.h"
/**
 * print_rev - returns value of a string
 * @s: pointer to string given as parameter
 * Return: Always 0.
 */

void print_rev(char *s)
{
	char *begin_ptr, *end_ptr, tmp;

	begin_ptr = s;
	end_ptr = s;

	while (*end_ptr != '\0')
	{
		end_ptr++;
	}
	end_ptr--;


	while (end_ptr >=  begin_ptr)
	{
		_putchar(*end_ptr);
		end_ptr--;
	}

	_putchar('\n');
}
