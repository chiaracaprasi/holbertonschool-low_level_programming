#include "main.h"
/**
 * swap_int - swaps values of two int
 * @a: pointer to number given as parameter
 * @b: pointer to number given as parameter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
