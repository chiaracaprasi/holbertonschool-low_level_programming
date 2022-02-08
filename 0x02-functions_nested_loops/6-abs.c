#include "main.h"

/**
 *_abs- computes absolute value of a number
 * @int: number to check
 * Return: n;
 */
int _abs(int n)
{
	if (n < 0)
		return (n + (n * 2));
	else
		return (n);

}
