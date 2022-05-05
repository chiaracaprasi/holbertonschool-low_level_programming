#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: linked list given
 * @idx: index of the list where new node should be added - start at 0
 * @n: node value to add
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count, len;
	dlistint_t *new, *tmp;

	if (h == NULL)
		return (NULL);
	if (h == NULL && idx != 0)
		return (0);
	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		for (count = 0; count < idx - 1; count++)
		{
			if (tmp == NULL)
			{
				free(new);
				return (NULL);
			}
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));

			tmp = tmp->next;
		}
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next->prev = new;
		tmp->next = new;
	}
	return (new);
}
