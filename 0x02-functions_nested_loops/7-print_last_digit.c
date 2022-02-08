#include "main.h"

/**
 *print_last_digit- computes absolute value of a number
 * @n: number to check
 * Return: n;
 */
int print_last_digit(int n)
{
	int m = ((n % 10) + '0');

	if (n <= 0)
		_putchar(m);
	else if (n > 0)
		_putchar(-m);
	return (n);

}
