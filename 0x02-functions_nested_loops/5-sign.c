#include "main.h"

/**
 *print_sign - prints sign of a number
 * @n: the number to check
 * Return: 1 if c is positive, 0 is = 0, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
