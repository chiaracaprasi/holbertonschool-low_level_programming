#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns num of bits to be flipped to get frm 1 num to another.
 * @n: first number given
 * @m: second number given
 * Return: number of bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int z, count;

	count = 0;
	z = n ^ m;

	while (z > 0)
	{
		count = count + (z & 1);
		z >>= 1;
	}
	return (count);
}
