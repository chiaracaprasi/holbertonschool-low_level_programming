#include "main.h"

/**
 *_islower - checks for lower case
 * @c: the lower char to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int c = 'a';

	if (c <= 'z')
		return (1);
	else
		return (0);

}
