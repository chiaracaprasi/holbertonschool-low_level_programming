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
 * get_dnodeint_at_index -  function that returns nth node of list
 * @head: linked list given
 * @index: index of the node starting at 0
 * Return: the nth node of linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int len = dlistint_len(head);

	if (head == NULL || index > len)
		return (NULL);

	if (index == 0)
		return (head);

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	return (head);
}
