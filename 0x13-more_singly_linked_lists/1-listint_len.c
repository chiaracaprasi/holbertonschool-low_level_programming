#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len -  returns number of elements in listint
 * @h: linked list given
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
