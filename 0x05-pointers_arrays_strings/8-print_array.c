#include "main.h"
#include <stdio.h>

/**
  * print_array - print a string followed by new line
 * @a: pointer to array given as parameter
 * @n: number of elements of the array to be printed
 *Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
		printf(", %d", a[i]);
	}
	printf("\n");


}
