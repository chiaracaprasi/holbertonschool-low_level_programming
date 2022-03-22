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
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: linked list given
 * @idx: index of the list where new node should be added - start at 0
 * @n: node value to add
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *new;
	listint_t *tmp;
	unsigned int len;

	if (head == NULL)
		return (NULL);

	if (head == NULL && idx != 0)
		return (0);

	len = listint_len(*head);
	if (idx > len)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	tmp = *head;
	if (head == NULL && idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (count = 0; count < idx - 1; count++)
	{
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
