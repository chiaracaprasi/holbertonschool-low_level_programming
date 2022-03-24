#include <stdio.h>
#include "main.h"

/**
 * get_bit - eturns the value of a bit at a given index.
 * @n: number given
 * @index: index given, starting from 0 of bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	char result;

	result = (n >> index) & 1;
	return (result);
}
