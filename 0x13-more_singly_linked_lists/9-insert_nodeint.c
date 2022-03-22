#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	new->n = n;

	if (head == NULL && idx != 0)
		return (0);

	if (head == NULL && idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	for (count = 0; count < idx; count++)
	{
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
