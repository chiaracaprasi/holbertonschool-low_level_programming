#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlist_t list.
 * @h: list given
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
