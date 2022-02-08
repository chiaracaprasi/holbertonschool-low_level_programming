#include "main.h"

/**
 *print_last_digit- computes absolute value of a number
 * @n: number to check
 * Return: n;
 */
int print_last_digit(int n)
{
	int m = (n % 10);

	if (n < 0)
	{
		m = -m;
		_putchar(m + '0');
	}
	return (n);

}
