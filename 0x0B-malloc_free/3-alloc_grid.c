#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: Null for Error, otherwise pointer to array
 */
int **alloc_grid(int width, int height)
{

	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(*p[i]));
		if (p[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
	{
		p[0][0] = 0;
	}
	return (p);
}
