#include "main.h"
#include <stdio.h>

/**
 * print_number - print an integer
 * @n: number given as parameter
 *
 * Return: string.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
