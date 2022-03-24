#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number or 0 if string null or containing invalid char
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int value;

	if (b == NULL)
		return (0);

	i = 0;
	value = 0;

	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value = value + b[i] - '0';
		i++;
	}

	while (b[i] != '\0')
	{
		if (b[i] != '1' || b[i] != '0')
			return (0);
		i++;
	}
	return (value);
}
