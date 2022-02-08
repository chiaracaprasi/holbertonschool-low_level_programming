#include "main.h"

/**
 *_islower - checks for alpha character
 * @c: the lower char to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
