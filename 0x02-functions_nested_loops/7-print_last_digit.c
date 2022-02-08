#include "main.h"

/**
 *print_last_digit- computes absolute value of a number
 * @n: number to check
 * Return: n;
 */
int print_last_digit(int n)
{
	int n = (n % 10);

	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
	}
	return (n);

}
