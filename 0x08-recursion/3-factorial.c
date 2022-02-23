#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: given number
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	else
		return (n* factorial(n - 1));

}
