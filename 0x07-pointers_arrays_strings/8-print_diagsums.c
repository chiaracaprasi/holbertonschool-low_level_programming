#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of int
 * @a: array given
 * @size: size of multiarray
 *
 * Return:0
 */

void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i = =j || i + j == size - 1)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("Sum = %f\n", sum);
}
