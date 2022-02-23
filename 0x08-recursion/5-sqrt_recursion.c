#include "main.h"
#include <stdio.h>

/**
 * natural_square_root- returns natural square root of a number
 * @y: given number
 * @n: given number
 * Return: returns natural square root of a number given
 */
int natural_square_root(int y, int x)
{
	if (y > (x / 2))
	{
		return (-1);
	}
	if (y * y == x)
	{
		return (y);
	}
	else
		return (natural_square_root(y + 1, x));
}

/**
 * _sqrt_recursion- returns natural square root of a number
 * @n: given number
 *
 * Return: returns natural square root of a number given
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
		return (1);

	return (natural_square_root(1, n));
}
