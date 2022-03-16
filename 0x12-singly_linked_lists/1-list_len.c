#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements of a list_t list.
 * @h: list_t given
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;

	}
	return (node);
}
