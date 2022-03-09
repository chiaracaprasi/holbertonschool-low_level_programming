#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: name of array passed
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: no element match or size <=0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		while (index < size)
		{
			if (cmp(array[index]) != 0)
				return (index);
			index++;
		}
	}
	return (-1);
}
