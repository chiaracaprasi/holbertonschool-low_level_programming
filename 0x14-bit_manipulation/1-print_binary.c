#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number given
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	char lu;

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	lu = (n & 1) + '0';

	_putchar(lu);
}
