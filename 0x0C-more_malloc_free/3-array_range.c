#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers,
 * values from min (included) to max (included), from min to max
 * @min: lower value in array
 * @max: higher value in array
 *
 * Return: Null if min > max or malloc fails, otherwise pointer to array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, range;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min + 1;
	p = malloc(range * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		p[i] = min++;
		i++;
	}

	return (p);
}
