#include "main.h"
#include <stdio.h>
/**
 * prime_test - tells if input integer is a prime number by returning 1
 * @n: the given number to check
 * @i: incrementing number to test against
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int prime_test(int i, int n)
{
	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_test(i + 1, n));
	}
}


/**
 * is_prime_number - tells if input integer is a prime number by returning 1
 * @n: given number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	else
	{
		return (prime_test(2, n));
	}

}
