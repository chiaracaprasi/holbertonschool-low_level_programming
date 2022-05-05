#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in list
 * @h: list given
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}
