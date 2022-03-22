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

/**
 * get_nodeint_at_index - function that returns nth node of linked list.
 * @head: linked list given
 * @index: index of the node starting at 0
 * Return: the nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	unsigned int len = listint_len(head);

	if (head == NULL)
		return (0);

	if (index == 0)
		return (head);

	if (index > len)
		return (NULL);

	while (head != NULL && count < index)
	{
		count++;
		head = head->next;
	}
	return (head);
}
