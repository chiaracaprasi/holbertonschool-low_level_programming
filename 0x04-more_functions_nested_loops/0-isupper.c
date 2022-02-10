#include "main.h"

/**
 *_isupper - checks for uppercase
 * @c: the lower char to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
