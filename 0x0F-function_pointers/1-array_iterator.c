#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -executes function given as parameter on each array element
 * @array: name of array passed
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	if (array == NULL || action == NULL)
		return;

	while (count < size)
	{
		count++;
		action(array[count]);
	}
}
