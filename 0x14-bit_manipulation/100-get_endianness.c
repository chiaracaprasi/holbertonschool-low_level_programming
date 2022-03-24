#include <stdio.h>
#include "main.h"

/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int i = 0;
	char *cp = (char *)&i;

	if (*cp == 1)
		return (1);

	else
		return (1);
}
