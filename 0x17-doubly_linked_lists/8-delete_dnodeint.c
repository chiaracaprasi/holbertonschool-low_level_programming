#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delet node at a given position
 * @head: linked list given
 * @index: index of the node should be removed - start at 0
 * Return: 1 for success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *tmp;

	if (*head == NULL || head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (count = 0; tmp != NULL && count < index - 1; count++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (tmp->next == NULL)
		tmp->next->prev = tmp->prev;

	tmp->prev->next = tmp->next;
	free(tmp);

	return (1);
}
