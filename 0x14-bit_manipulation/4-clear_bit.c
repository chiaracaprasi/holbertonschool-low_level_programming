#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number
 * @index: index given, starting from 0 of bit you want to get
 * Return: 1 for success or -1 if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	index = 1 << index;
	*n &= (~index);

	return (1);
}
