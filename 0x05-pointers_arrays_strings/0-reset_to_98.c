#include "main.h"
/**
 * reset_to_98 - takes pointer as parameter and change the value to 98
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int *p = &n;
	*p = 98;

}
